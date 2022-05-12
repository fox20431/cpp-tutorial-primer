#!/bin/sh

for file in ./*
do
	# Check if the file names are the same
	if [[ $file =~ ".cpp" ]]
	then
	# ${file:11} intercept string from 11th to end.
		mv ${file} ${file:11}
	fi
done