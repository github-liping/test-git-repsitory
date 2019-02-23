#!/usr/bin/python
# Author longqi-mail:1218715400@qq.com

from __future__ import print_function

# import argparse
from optparse import OptionParser

def outfile(handle,line):
	handle.write(line)
	
def cover(filename,genname):
	filehandle = open(filename, 'r')
	genhandle = open(genname, 'wb')
	filelines = filehandle.readlines()
	for line in filelines:
		if line.find('#') == 0 :
			line = line.replace('#','// ',1)
		else :
			if line.find('=') != -1 :
				line = line.replace(" ","")
				line = '#define '+line
				line = line.replace('=', ' ', 1)
		outfile(genhandle,line)
	filehandle.close()
	genhandle.close()

def main():
	# cmd_parser = argparse.ArgumentParser()
	# cmd_parser.add_argument('-c', '--cfg', dest='cfgfile', default='./common/engineer.cfg',
    #                         help='Specified the name of the generated qstr header file')
	# cmd_parser.add_argument('-e', '--head', dest='headfile', default='./common/head.h',
    #                         help='Specified the name of the generated qstr header file')
	# args = cmd_parser.parse_args()
	# cover(args.cfgfile,args.headfile)
	
	# for python 2.6 compatible with python 2.7	___by longqi 20170602
	parser=OptionParser()
	parser.add_option('-c', '--cfg', dest='cfgfile', default='./common/engineer.cfg',
                            help='Specified the name of the generated qstr header file')
	parser.add_option('-e', '--head', dest='headfile', default='./common/head.h',
                            help='Specified the name of the generated qstr header file')
	(options, args)=parser.parse_args()
	cover(options.cfgfile,options.headfile)
	
if __name__ == "__main__":
    main()
	
	
