#include <iostream>
#include <string>

int main()
{
    

    /*
    //Printing data to console
    std::cout << "Hello C++23 " << std::endl;

    int age {21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error message: Something is wrong" << std::endl; //Prints an error message
    std::clog << "Log message: This is a log" << std::endl; //Prints logs
    */

    /*
    //Taking data from console/terminal
        int age1;
        std::string name;

        std::cout << "Please type your name and age " << std::endl;
        std::cin >> name;
        std::cin >> age1;

        //std::cin >> name >> age1;  <---- same as line 21 and 22

        std::cout << "Hello " << name << ", you are " << age1 << " years old." << std::endl;

    

    // Data with spaces
    std::string full_name;
    int age3;

    std::cout << "Please type your full name and age.." << std::endl;
    std::getline(std::cin, full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name << ", you are " << age3 << " years old." << std::endl;

    */

   std::string country;
   std::cout << "Where do you live?" << std::endl;
   
   std::getline(std::cin, country);
   std::cout << "I've heard great things about " << country << ". I'd like to go sometime." << std::endl;

   
    return 0;
}