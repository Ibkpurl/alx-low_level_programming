#!/bin/bash

# Reset
Color_Off='\033[0m'       # Text Reset

# Regular Colors
Black='\033[0;30m'        # Black
Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
Yellow='\033[0;33m'       # Yellow


FILES=$(ls)

for filename in $(ls); do 
    if [[ $filename == *\.c ]] # * is used for pattern matching
    then
        echo  -e "Generating object for ${Yellow}${filename}${Color_Off}";
        gcc -c $filename
        echo  -e "Generated object-file for ${Green}${filename}${Color_Off}";
    else
        echo "Skipping ${filename} as it is not a c file"; 
    fi
done

printf "\n\nListing Object files in current directory\n";
OBJECT_FILES=$(ls *.o)
STATIC_LIB_COMMAND="ar rc libmy.a "

for filename in $OBJECT_FILES; do 
    echo "${filename}"; 
    STATIC_LIB_COMMAND="${STATIC_LIB_COMMAND} ${filename}"
done

printf "\n\nCreating static library from generated file\n";
printf "Command is: ${STATIC_LIB_COMMAND}"
$($STATIC_LIB_COMMAND)

printf "\n\nVerifying static library in libmy.a\n";
printf "Command is: nm libmy.a"
nm libmy.a