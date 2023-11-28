#include <iostream>

int main(){

    //Can use normal pointer to char like we've been doing for
    //double, int and anything
    const char *message {"Hello World"};

   // *message = "B"; //Compiler error

    std::cout << "message: " << message << std::endl;    
    std::cout << "message again: " << *message << std::endl;
    
    return 0;
}