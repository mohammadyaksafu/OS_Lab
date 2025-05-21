#!/bin/bash

echo This program is for Taking Factorial 

read n
fact=1
for(( i=1;i<=n;i++))
do
	fact=$((fact*i))
done

echo The fact of $n is $fact

