#!/bin/bash

# create a file with standard c librairies and functions
read -p 'nom du fichier C a creer : ' FILE_CREATED


code $FILE_CREATED &&
echo "#include <stdio.h>\n#include <stdlib.h>\n\nvoid main (){

}" > $FILE_CREATED && code $FILE_CREATED

