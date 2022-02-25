#!usr/bin/env bash

file="$1"

if [[ -f $file ]]
then
	echo "It exist."
	gcc file.c -o file222
	./file222
fi
