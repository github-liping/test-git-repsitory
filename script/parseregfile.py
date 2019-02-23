#!/usr/bin/python
# Author longqi mail:1218715400@qq.com

from __future__ import print_function

# import argparse
from optparse import OptionParser
import os
import time

def outfile(handle,line):
	handle.write(line)
	
#  	
def cover(filename,gennamecfg,gennamehead):
#	os.system('dos2unix '+filename)
	filehandle = open(filename, 'r')
	gencfghandle = open(gennamecfg, 'wb')
	genheadhandle = open(gennamehead, 'wb')
	outfile(genheadhandle, "/**\n * This file is automatically generated\n * @Author Longqi mail:1218715400@qq.com\n */\n")
	outfile(gencfghandle, "#\n# This file is automatically generated\n# @Author Longqi mail:1218715400@qq.com\n \n");
	outfile(gencfghandle,'# generated at '+time.strftime('%Y %m %d %H %M %S')+'\n')
	outfile(genheadhandle,'/* generated at '+time.strftime('%Y %m %d %H %M %S')+' */\n')
	filelines = filehandle.readlines()
	writecfg = True
	for line in filelines:
		if writecfg == True :
			if line.find('// ') == 0 :
				line = line.replace('// ','#',1)
			else :
				if line.find('#define ') != -1 :
					line = line[8:]
					if line.find(' ') != -1 :
						line = line.replace(' ', '=', 1)
					else :
						line = line[0:len(line)-1] + '=y\n'
			if line[len(line)-1] == '=' :
				line = line + 'y'
			if line.find('#ifndef ') != -1 :
				writecfg = False
				outfile(genheadhandle,line)
				continue
			outfile(gencfghandle,line)
		else :
			outfile(genheadhandle,line)
	filehandle.close()		
	gencfghandle.close()		
	genheadhandle.close()		

def main():
	# cmd_parser = argparse.ArgumentParser()
	# cmd_parser.add_argument('-c', '--cfg', dest='cfgfile', default='./common/engineer.cfg',
    #                         help='Specified the name of the generated qstr header file')
	# cmd_parser.add_argument('-e', '--head', dest='headfile', default='./common/head.h',
    #                         help='Specified the name of the generated qstr header file')
	# cmd_parser.add_argument('-p', '--parse', dest='parserfile', default='./common/head.h',
    #                         help='Specified the name of the generated qstr header file')
	# args = cmd_parser.parse_args()
	# cover(args.parserfile,args.cfgfile,args.headfile)
	
	# for python 2.6 compatible with python 2.7	___by longqi 20170602
	parser=OptionParser()
	parser.add_option('-c', '--cfg', dest='cfgfile', default='./common/engineer.cfg',
                            help='Specified the name of the generated qstr header file')
	parser.add_option('-e', '--head', dest='headfile', default='./common/head.h',
                            help='Specified the name of the generated qstr header file')
	parser.add_option('-p', '--parse', dest='parserfile', default='./common/head.h',
                            help='Specified the name of the generated qstr header file')
	(options, args)=parser.parse_args()
	cover(options.parserfile,options.cfgfile,options.headfile)
	
#	os.system('dos2unix '+' '+args.cfgfile+' '+args.headfile)
	
if __name__ == "__main__":
    main()
	
	
