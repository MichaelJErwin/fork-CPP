# fork-CPP
Experimenting with fork() in C++

This program is an attempt to experiment with fork() which spawns a child process from
a parent process. This program was run on an Ubuntu VM. This program alludes 
to Monty Python and the Holy Grail.

A program called ni will:

a. Announce that it is a Knight Who Says "Ni" 
b. Prompt the user for and accept user input from the keyboard 
c. Cowers the user with "Ni!" regardless of user input 
d. Demand a shrubbery 
e. Write the entire interaction out to a text file named the_forest.txt 

A driver program will call fork() to create a child process. The child should print its
process ID and its parent's process ID using the calls getpid() and getppid(). Then, the 
child should use the execv() call to run the ni program. The ni program name will be 
passed as an argument at the command line.

After creating the child, the parent should use wait() to wait on the child process
to exit. After the child dies, the parent should display the_forest.txt 
created by ni using the cat shell command.

A Makefile compiles the ni and driver sources into two separate executables.

A bash shell script named shrubbery does the following:

a. Checks for existence of a Makefile; if not present, display an error message and quit 
b. Runs make; if something goes wrong, display an error message and quit 
c. Checks for existence of the driver and ni executables; if not present, display an error message and quit 
d. Runs the driver program with the proper command-line argument (ni) 

**REMEMBER TO ENABLE EXECUTION FOR THE BASH SCRIPT. TO RUN PROGRAM AT BASH SHELL:**

./shrubbery.sh

