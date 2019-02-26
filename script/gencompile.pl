#!/usr/bin/perl -w
# Author longqi mail:1218715400@qq.com

use strict;
use warnings;
use Getopt::Long;
use vars qw($panelPath $irPath $vipPath $edpPath $orderPath $help);
use vars qw(@seekdir @FolderWithinOneCustomer @TopDIRs @Types @Configs @IRs @EDPs @Items);
use vars qw($dir1 $dir2 $dir3 $dir4);

#============================================================================
#read parameters from command line
GetOptions(
	"vipfolder|R=s" => \$irPath,
	"irfolder|V=s" => \$vipPath,
	"edpfolder|E=s" => \$edpPath,
	"help|h" => \$help,
);

#============================================================================
#Sub function used to show usage for user
sub Usage
{
	print "Usage:$0 -R the path of remote folder\n";
	exit 1;
}

#============================================================================
# output to file
# author longqi
sub Output2File($\@)
{
	my ($Outfile, $Content) = @_;

	open(OUTFILE, ">./tempFile") || die "$!\n";  # open file.

	my $cur = 0;
	my $items_count = @$Content;

	#Out put to given file
	while ($cur++ < $items_count)
	{
		print OUTFILE shift @$Content;
	}

	close(OUTFILE);

	#if content has changed, cover the origin file
	#print ("cmp -s $Outfile ./tempFile && rm -f ./tempFile || mv ./tempFile $Outfile\n");
	system "cmp -s $Outfile ./tempFile && rm -f ./tempFile || mv ./tempFile $Outfile";
}
#============================================================================
# author longqi

sub ParseDIR($$\@)
{
	my ($path, $ParseDir, $Result) = @_;
	my ($subpath, $subsubpath, $subhandle, $handle);

	if (-d $path)
	{
		if (opendir($handle, $path))
		{
			while ($subpath = readdir($handle))
			{
				if (!($subpath =~ m/^\.$/) and !($subpath =~ m/^\.\.$/) and !($subpath =~ m/^\.svn$/))
				{
					my $p = $path."/$subpath";
					if (-d $p && $ParseDir == 1) # match directory
					{
						if ($subpath !~ /objs/)
						{
							#print "--------Find Directory: $subpath\n";
							push @$Result, $subpath;
						}
					}
					elsif (-d $p && $ParseDir == 2) # match directory
					{
						if (!($subpath =~ /(tools)/) and !($subpath =~ /(common)/) and !($subpath =~ /(script)/))
						{
							#print "--------Find Directory: $subpath\n";
							push @$Result, $subpath;
						}
						elsif ($subpath =~ /(common)/)
						{
							if (opendir($subhandle, $p))
							{
								while($subsubpath = readdir($subhandle))
								{
									if (!($subsubpath =~ m/^\.$/) and !($subsubpath =~ m/^\.\.$/) and !($subsubpath =~ m/^\.svn$/))
									{
										push @$Result, $subpath."/$subsubpath";
									}
								}
								closedir($subhandle);
							}
						}
					}
					elsif (-e $p && $ParseDir == 0) # match file
					{
						if ($subpath =~ /.*\.config$/)
						{
							#print "--------Find File: $subpath\n";
							push @$Result, $subpath;
						}
					}
				}
			}
			closedir($handle);
		}
		
		@$Result = sort @$Result;
	}
	else
	{
		print "we can't find your given path!\n" && exit 1;
	}
}

#============================================================================
# gen panel menu 
# author longqi
# 
sub GenCompileRules($\@)
{
	my ($Path, $IRs) = @_;
	my ($parseIR, @Content);
	push(@Content, "#\n# This file is automatically generated\n# \@Author Longqi mail:1218715400\@qq.com\n \n");
	push(@Content, "-include ../../../../.config\ninclude ../../../../hikeen/common/ir/Makefile.default\n\n\n");
	foreach $parseIR (@$IRs)
	{
		push(@Content, "OBJS-\$(CONFIG_".uc($parseIR).") += ../../../../hikeen/common/ir/".$parseIR."/".substr($parseIR, index($parseIR,"_") + 1 )."");
		push(@Content, "_Map.o\n");
	}
	# print @Content;
	Output2File("$Path/Makefile", @Content);
}
# gen edp menu 
# author longqi
# 
sub GenEDPCompileRules($\@)
{
	my ($EDPPath, $EDPs) = @_;
	my ($parseIR, @Content);
	push(@Content, "#\n# This file is automatically generated\n# \@Author Longqi mail:1218715400\@qq.com\n \n");
	push(@Content, "include \$(TOPDIR)/../../.config\n\n\n");
	foreach $parseIR (@$EDPs)
	{
		push(@Content, "PCOBJS-\$(CONFIG_".uc($parseIR).") += ./edpdrv/".$parseIR."/edp_driver.o\n");
	}
	# print @Content;
	Output2File("$EDPPath/Makefile", @Content);
}
#============================================================================
# gen panel menu 
# author longqi
# 
sub GenCompileVipRules($\@)
{
	my ($Path, $IRs) = @_;
	my ($parseIR, @Content);
	push(@Content, "#\n# This file is automatically generated\n# \@Author Longqi mail:1218715400\@qq.com\n \n");
	push(@Content, "-include ../../../../../.config\n-include ../../../../hikeen/common/ir/Makefile.default\n\n\n");
	foreach $parseIR (@$IRs)
	{
		push(@Content, "OBJS-\$(CONFIG_".uc($parseIR).") += ../../../../../hikeen/common/panel/".$parseIR."/");
		push(@Content, "VIP_Panel.o\n");
	}
	# print @Content;
	Output2File("$Path/Makefile.in", @Content);
}



#============================================================================
# author longqi
sub GenRemoteHead($\@)
{
	my ($Path, $IRs) = @_;
	my ($parseIR, @Content);
	push(@Content, "/**\n * This file is automatically generated\n * \@Author Longqi mail:1218715400\@qq.com\n */\n");
	push(@Content, "#ifndef __HK_REMOTE_H\n");
	push(@Content, "#define __HK_REMOTE_H\n");



	push(@Content, "#include <Platform_Lib/RemoteControl/RemoteControl.h>\n");
	push(@Content, "#include \"../../autoconf.h\"\n");
	push(@Content, "#include \"./ir_default.h\"\n\n");
	foreach $parseIR (@$IRs)
	{
		push(@Content, "#ifdef CONFIG_".uc($parseIR)." \n");
		push(@Content, "#include \"./$parseIR/".substr($parseIR, index($parseIR,"_") + 1 )."_Map.h\" \n");
		push(@Content, "#endif \n\n");
	}
	push(@Content, "extern IR_MAP_t stIR_map[];\n");
	push(@Content, "extern int dIR_map_size;\n\n");
	push(@Content, "#endif /* __HK_REMOTE_H */\n");
	# print @Content;
	Output2File("$Path/hk_remote.h", @Content);
}
#============================================================================
# author longqi
sub GenRemoteCFile($\@)
{
	my ($Path, $IRs) = @_;
	my ($parseIR, @Content);
	push(@Content, "/**\n * This file is automatically generated\n * \@Author Longqi mail:1218715400\@qq.com\n */\n");
	push(@Content, "#include \"./hk_remote.h\"\n");
	push(@Content, "#include <Platform_Lib/RemoteControl/RemoteControl.h>\n");
	push(@Content, "IR_MAP_t stIR_map[] = \n{\n");
	foreach $parseIR (@$IRs)
	{
		push(@Content, "#ifdef CONFIG_".uc($parseIR)." \n");
		
		push(@Content, "\t{\"$parseIR\",".substr($parseIR, index($parseIR,"_") + 1 )."_CUSTOMER,".substr($parseIR, index($parseIR,"_") + 1 )."_IR_POWER,remote_".substr($parseIR, index($parseIR,"_") + 1 )."_nec},\n");
		push(@Content, "#endif \n\n");
	}
	push(@Content, "};\nint dIR_map_size = sizeof(stIR_map)/sizeof(IR_MAP_t);\n\n");
	# print @Content;
	Output2File("$Path/hk_remote.c", @Content);
}
#============================================================================
# gen power ir head 
# author longqi
sub gen8051coreparam($)
{
	my ($Path) = @_;
	my ($getline, $count, @genstrings);
	push(@genstrings, "/**\n * This file is automatically generated\n * \@Author Longqi mail:1218715400\@qq.com\n */\n");
	push(@genstrings, "#ifndef __LOWLEVEL_PARAM_H\n#define __LOWLEVEL_PARAM_H\n\n#include \"../../autoconf.h\"\n#include \"./ir_default.h\"\n// #include \"hk_remote.h\"\n\n");
	
	open(File, "./hikeen/common/ir/hk_remote.h") || die "$!stop \n";  # open file.
	foreach $getline (<File>)
	{
		if (!($getline =~ m/RemoteControl?/) and (($getline =~ m/#ifndef?/) or ($getline =~ m/#ifdef?/) or ($getline =~ m/#include?/) or ($getline =~ m/#define?/) or ($getline =~ m/#endif?/)))
		{
			push(@genstrings, $getline);
		}
	}
	close(File);
	
	$count = 0;
	open(File, "./.config") || die "$!stop \n";  # open file.
	foreach $getline (<File>)
	{
		if($getline =~ m/CONFIG_IRS_TYPE?/)
		{
			push(@genstrings, "#define IR_POWERID_$count ".substr($getline, rindex($getline,"=") + 5, rindex($getline,"\"") - rindex($getline,"_") - 1)."_IR_POWER\n");
			$count = $count + 1;
		}
	}
	close(File);
# default file	
	open(File, "./hikeen/common/ir/Makefile.default") || die "$!stop \n";  # open file.
	foreach $getline (<File>)
	{
		if (($getline =~ m/OBJS-y?/) and ($getline =~ m/IR_?/))
		{
			push(@genstrings, "#define IR_POWERID_$count ".substr($getline, rindex($getline,"/") + 1, rindex($getline,"_") - 1 - rindex($getline,"/"))."_IR_POWER\n");
			$count = $count + 1;
		}
	}
	close(File);
	for(;$count<3;$count++)
	{
		push(@genstrings, "#define IR_POWERID_$count 0\n");
	}
	push(@genstrings, "\n#endif /* __LOWLEVEL_PARAM_H */\n");
	Output2File("$Path/lowlevel_param.h", @genstrings);
}
#============================================================================
# gen main routine 
# author longqi

sub GenCompile()
{
	Usage() if (defined $irPath and defined $vipPath and defined $edpPath) == 0;
	ParseDIR($vipPath, 1, @seekdir);
	GenCompileVipRules($vipPath, @seekdir);
	@seekdir = ();
	ParseDIR($irPath, 1, @seekdir);
	GenCompileRules($irPath, @seekdir);
	GenRemoteHead($irPath, @seekdir);
	GenRemoteCFile($irPath, @seekdir);
	gen8051coreparam($irPath);
	@seekdir = ();
	ParseDIR($edpPath, 1, @seekdir);
	GenEDPCompileRules($edpPath, @seekdir);
}

GenCompile();

exit 0;















