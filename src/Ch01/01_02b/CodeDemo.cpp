// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Hi There!" << std::endl;
    std::cout << "What's your name: " << std::flush;

    std::cin >> name;

    std::cout << "Hello there, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}