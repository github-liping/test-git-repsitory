#!/bin/sh
# Author longqi mail:1218715400@qq.com
FILE_PATH=".config"
ORDER_PATH="./hikeen/order/"
ORDER_NAME=`cat $FILE_PATH | grep CONFIG_ORDERS_TYPE | sed -e s/CONFIG_ORDERS_TYPE=//g|sed -e s/\"//g`
#echo $ORDER_NAME
cp -f $FILE_PATH $ORDER_PATH$ORDER_NAME"/.old"$ORDER_NAME"config"


just for test merge
