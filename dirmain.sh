#!/bin/bash
# automates directory creation.
echo "dir >"
read dir
mkdir $dir
cp dirmain.sh $dir
cp dirgit.sh $dir
cp filecreate.sh $dir
cp cfxn.sh $dir
cd $dir
echo $dir > README.md
bash dirgit.sh
cd $dir
