//Michael Erwin

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <cassert>


int main(int argc, const char* argv[])
{   
    if(argc != 2)                                        //If amount of arguments doesn't equal 2
                                                         //(original executable and then file to 
                                                         //jump to with execv())
    {
    	std::cout << "Invalid number of parameters" << std::endl;
    	exit(1);
    }
    pid_t pid = fork();                                  //create new process
    if(pid < 0)                                          //if fork failed
    {
        fprintf(stderr, "fork failed\n");
        exit(1);
    }
    else if(pid == 0)                                    //child process
    {
        std::cout << "\nThis is the child process with PID " << (int) getpid() << ". My parent process's PID is " <<
        (int) getppid() << std::endl;
                                                         //Display the child PID and parent PID
	
        char* args[2];                                   //create array of char pointers with 2 items
        args[0] = strdup(argv[1]);                       //first item will be the path for the ni program
        args[1] = NULL;                                  //second item will be NULL
        execv(args[0], args);                            //execute the program, we want to pass the args as an array 
                                                         //of char pointers
    }
    else                                                 //parent process
    {
        int flag;                                        //will hold status info 
        int pid_wait = wait(&flag);                      //wait for child process to end
        
        std::cout << std::endl;                          //newline
        std::cout << "Log: " << std::endl;		
        
        char* args_cat[3];                               //create array of char pointers with 3 items
        args_cat[0] = strdup("cat");                     //first item will be cat program
        args_cat[1] = strdup("the_forest.txt");          //next item wil be name of text file
        args_cat[2] = NULL;                              //last item will be null
        execvp(args_cat[0], args_cat);                   //execute the program, we want to pass the args as an array 
                                                         //of chars and we want to use PATH variable (the p in execvp) 
    }
    return 0;
}
