echo "Input your file name "
read name

if [ -f $name ]
then 
	echo "This file exist"
else
	echo  "File Doessnot exitst"
fi
