#!/bin/bash
echo "file>"
read file
touch $file
echo "#include \"sort.h\"" > $file
echo "/**
* $file - 
* @param
* @param
*
* Decsription: 
* Return: Always(0) success
*/" >> $file
echo "Prototype>"
read proto 
echo $proto >> $file
echo "{
	
}" >> $file
touch sort0
head -n -1 sort.h > sort0
echo $proto >> sort0
echo "#endif" >> sort0
mv sort0 sort.h
chmod 764 $file
bash dirgit.sh
gedit $file

