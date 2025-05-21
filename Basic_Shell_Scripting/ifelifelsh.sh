#!/bin/bash

read -p "Enter your value :" a
if [ $((a%2)) -eq 1 ]
then
	echo This number is Odd
else
	echo This number is Even
fi
