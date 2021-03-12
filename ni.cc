//Michael Erwin

#include <iostream>
#include <cstdio>
#include <fstream>
#include <ostream>
#include <unistd.h>

int main()
{

        std::ofstream file;
        file.open ("the_forest.txt");                                   //Open the file.

        std::cout << "\nI am a Knight who says Ni!" << std::endl;       //Knight introduction
        file << "Knight: I am a Knight who says Ni!" << std::endl;      //log interaction

        std::cout << "What is your response?: ";                        //Prompt for input
        file << "Prompt: What is your response?: " << std::endl;        //log interaction

        std::string input = "";                                         //create blank string for input
        std::getline(std::cin, input);                                  //get user input
        file << "User: " << input << std::endl;                         //log interaction

        std::cout << "Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;            //Knight response
        file << "Knight: Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;         //log interactions

        std::cout << "Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;
        file << "Knight: Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;

        std::cout << "Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;
        file << "Knight: Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;

        std::cout << "Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;
        file << "Knight: Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;

        std::cout << "Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;
        file << "Knight: Ni! Ni! Ni! Ni! Ni! Ni!" << std::endl;

        std::cout << "I demand...a shrubbery!" << std::endl;            //Knight closure statement
        file << "Knight: I demand...a shrubbery!" << std::endl;         //log interaction
        file.close();                                                   //close file stream
        _Exit(0);                                                       //Exit instead of returning
};

