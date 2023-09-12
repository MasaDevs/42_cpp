#!/bin/bash

if [ $# -ne 1 ]; then
	echo "the arg must be file name"
	exit
fi
DATA=`cat $1`
TTY=`tty`
while read line
do
	echo $line | tee $TTY
	sleep 1;
done << FILE
$DATA
FILE
