#!/bin/bash

#assign name Makefile to FILE1 variable
FILE1=Makefile
#check if it exists
if [ -f "$FILE1" ]; then
    :                      #if so do nothing (no-op)
else 
    echo "$FILE1 does not exist."
    exit 1                 #else exit
fi

make                       #attempt to use makefile
if [ $? -eq 0 ]; then      #if resulting code was success
    :                      #no-op
else
    echo -e "\nSomething wrong with Makefile!\n"
    exit 1                 #otherwise error, so exit
fi

FILE2=driver               #same as above
if [ -f "$FILE2" ]; then   #with driver file
    :
else 
    echo "$FILE2 does not exist."
    exit 1
fi

FILE3=ni                   #same as above
if [ -f "$FILE3" ]; then   #with ni file
    :
else 
    echo "$FILE3 does not exist."
    exit 1
fi

chmod u+x driver           #make driver executable for current user
chmod u+x ni               #make ni executable for current user

./driver ni                #run driver with ni argument


