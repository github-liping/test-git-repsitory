#!/bin/sh
# Author longqi-mail:1218715400@qq.com

filename="./hikeen/script/filename.file"
zipname=".zip"
ORDER=""
HK_BOARD_ID=""
BOOT_SPI_RRJ_ID=""
BOARD_TUNER=""
UI_ID=""
PANEL_ID=""
IR_ID=""
DATE=""
TIME=""
PROVIDE=""

BOOT_SPI_RRJ_ID=`cat $filename | grep BOOT_SPI_RRJ_ID | sed -e s/BOOT_SPI_RRJ_ID=//g|sed -e s/\"//g`
echo -e "BOOT_SPI_RRJ_ID \r\t\t\t\t\t"$BOOT_SPI_RRJ_ID
if [ "$BOOT_SPI_RRJ_ID" == RTD293X_TV036_216_ddr256MB ]
then
software="./image_file_creator/install_RTD2938.img"
else
software="./image_file_creator/install_RTD2936.img"
fi

sisconfigfile="./.config"

#zipname="["$order"]["$HK_BOARD_ID"_"$BOARD_ID"]["$BOARD_TUNER"]["$PANEL_FILE_NAME"]["$IR_TYPE_NAME"][UI_"$UI_ID"][SVN_"$svn"]["$modify"].zip"
if [ "$1" == "" ]
then
	svn="null"
	echo "****************************************"
	echo -e "\t\033[36m[Warning] can't detect version\033[0m"
#	svn=`echo $1`
	echo -e "\t\033[36mplease \"make zip svn=version\"\033[0m"
	echo "--->Notice By Longqi."
	echo "****************************************"
else
	echo "****************************************"
	svn=`echo $1`
	echo "svn version is "$svn
	echo "--->Notice By Longqi."
	echo "****************************************"
fi
ORDER=`cat $filename | grep CONFIG_ORDERS_TYPE | sed -e s/CONFIG_ORDERS_TYPE=//g|sed -e s/\"//g`
echo -e "ORDER NAME \r\t\t\t\t\t"$ORDER
# HK_BOARD_ID=`cat $filename | grep BOARD_NAME | sed -e s/BOARD_NAME=//g|sed -e s/\"//g`
HK_BOARD_ID=`cat $filename | grep HK_BOARD_ID | sed -e s/HK_BOARD_ID=//g|sed -e s/\"//g`
echo -e "HK_BOARD_ID \r\t\t\t\t\t"$HK_BOARD_ID
BOARD_TUNER=`cat $filename | grep BOARD_TUNER | sed -e s/BOARD_TUNER=//g|sed -e s/\"//g`
echo -e "BOARD_TUNER \r\t\t\t\t\t"$BOARD_TUNER
UI_ID=`cat $filename | grep CONFIG_APP_FOLDER_NAME | sed -e s/CONFIG_APP_FOLDER_NAME=//g|sed -e s/\"//g`
echo -e "UI_ID \r\t\t\t\t\t"$UI_ID
PANEL_ID=`cat $filename | grep CONFIG_PANELS_TYPE | sed -e s/CONFIG_PANELS_TYPE=//g|sed -e s/\"//g`
echo -e "PANEL_ID \r\t\t\t\t\t"$PANEL_ID
IR_ID=`cat $filename | grep CONFIG_IRS_TYPE | sed -e s/CONFIG_IRS_TYPE=//g|sed -e s/\"//g`
IR_ID=`echo $IR_ID`
IR_ID=`awk 'BEGIN {split("'"$IR_ID"'",arr);print arr[1]}'`
echo -e "IR_ID \r\t\t\t\t\t"$IR_ID

DATE=`stat $software|grep +0800`
DATE=`echo $DATE`
STIME=`awk 'BEGIN {split("'"$DATE"'",arr);print arr[10]" "arr[11]}'|sed -e s'/\..*//'g`
echo -e "sw generate time \t\t\t"$STIME
STIME=`date +%s -d "${STIME}"`


FTIME=`stat $filename|grep +0800`
FTIME=`echo $FTIME`
FTIME=`awk 'BEGIN {split("'"$FTIME"'",arr);print arr[10] " " arr[11]}'|sed -e s'/\..*//'g`
echo -e "order generate time \t\t\t"$FTIME
FTIME=`date +%s -d "${FTIME}"`



# TIME=`awk 'BEGIN {split("'"$DATE"'",arr);print arr[11]}' | sed -e s/://g`
DATE=`awk 'BEGIN {split("'"$DATE"'",arr);print arr[10]}' | sed -e s/-/_/g`
# echo $DATE
# echo $TIME
# DFILE="./system/project/TV036_EuroDVB/custom_DVBT/Resource/ui_script/engineerMenu/log.rss"
# TIME=`cat $DFILE | grep Log_TimeStamp | sed -e 's/Log_TimeStamp=//g'`
# TIME=`strings system/project/TV036_EuroDVB/DvdPlayer | grep "Built on" | sed -e 's/Built on //g' | sed -e 's/ at//g' | sed -e 's/:/_/g' | sed -e 's/ /_/g'`  
TIME=`strings system/project/TV036_EuroDVB/DvdPlayer | grep "Built on" | sed -e 's/Built on *.*at //g' | sed -e 's/:/_/g'`  
zipname="["$ORDER"]["$HK_BOARD_ID"]["$BOARD_TUNER"]["$PANEL_ID"]["$IR_ID"][SVN_"$svn"]["$DATE"_"$TIME"].zip"
PROVIDE="# Provide"
if [ "$PROVIDE" != "# Provide" ]
then
	echo -e "\033[41;36mcan't package :\033[0m"
	echo -e "\t \033[31morder configure is not set !\033[0m"
	echo -e "\t \033[31mplease do it youself.\033[0m"
	echo -e "generate name is :"
	echo -e "\t""[order][board][tuner][panel][remoteir][UIproj][SVN_"$svn"]["$DATE"_"${TIME:0:4}"].zip"
elif [ $STIME -lt $FTIME ]
then
	echo -e "\033[41;36mcan't package :\033[0m"
	echo -e "\t \033[31morder configure is modify !\033[0m"
	echo -e "\t \033[31mplease do it youself.\033[0m"
	echo -e "generate name is :"
	echo -e "\t"$zipname
else
	echo "Package to zip..."
	echo $zipname
	zip -r $zipname $software
fi


