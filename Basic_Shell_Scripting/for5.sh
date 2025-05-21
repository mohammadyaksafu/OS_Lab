count=0
for x in $*

do 	
	if [ -f "$x" ] ; then
	count=$((count + 1))
	fi
done
echo $count
