#!/bin/bash

read -p "Provide your number" n

if [ $((n%2))=0 ]
then 
	echo This number is Even 
else
	echo This number is Odd
fi

