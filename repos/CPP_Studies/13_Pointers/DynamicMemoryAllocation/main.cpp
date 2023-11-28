#include <iostream>

int main(){
    /*    
    //How we've used pointers so far
    int number1 {22};

    int *p_number1 = &number1;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address: " << std::endl;
    std::cout << "number: " << number1 << std::endl; //22
    std::cout << "p_number: " << p_number1 << std::endl; //address of number variable
    std::cout << "&number: " << &number1 << std::endl; //address of number variable
    std::cout << "*p_number: " << *p_number1 << std::endl; //22


    //Undefined behavior 
    int *p_number2; //Uninitialized pointer, contains junk address
    //std::cout << "Uninitialized pointer: " << *p_number2 << std::endl; - compile time error

    int number2 {12};
    p_number2 = &number2; //Assigns pointer to valid address
    std::cout << std::endl;
    std::cout << "Uninitialized pointer: " << std::endl;
    std::cout << "p_number2: " << *p_number2 << std::endl;
    

    //BAD
    //Writing into uninitialized pointer through dereference 
    int *p_number3; //Contains junk address
    // *p_number3 = 55; //Writing into junk address: Bad

    std::cout << std::endl;
    std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
    std::cout << "p_number3: " << p_number3 << std::endl; // Reading from junk address
    std::cout << "*p_number3: " << *p_number3 << std::endl; 

    //Initializing pointer to null
    //int *p_number4{nullptr}; //Also works
    int *p_number4{}; //Initialized with pointer equilvalent of zero: nullptr
                     //A pointer pointing nowhere
    *p_number4 = 33; //Writing into a pointer pointing nowhere: very bad

    std::cout << std::endl;
    std::cout << "Reading and writing through nullptr: " << std::endl;
    std::cout << "p_number4: " << p_number4 << std::endl;
    std::cout << "*p_number4: " << *p_number4 << std::endl; //Reading from nullptr
    

    //Dynamic heap memory
    int *p_number5 {nullptr};
    p_number5 = new int;
    
    *p_number5 = 77; //Writing into dynamically allocated memory
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory: " << std::endl;
    std::cout << "*p_number5: " << *p_number5 << std::endl;

    //Return memory to the OS
    delete p_number5;
    p_number5 = nullptr;     
    */

    //It is also possible to initialize the pointer with a valid
    //address upon declaration. Not with a nullptr
    int *p_number6 {new int}; //Memory location contains junk value
    int *p_number7 {new int (22) }; //use direct initialization
    int *p_number8 {new int {23} }; //use uniform initialization 

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration: " << std::endl;
    std::cout << "p_number6: " << p_number6 << std::endl;
    std::cout << "*p_number6: " << *p_number6 << std::endl; //Junk value
    
    std::cout << "p_number7: " << p_number7 << std::endl;
    std::cout << "*p_number7: " << *p_number7 << std::endl; 

    std::cout << "p_number8: " << p_number8 << std::endl;
    std::cout << "*p_number8: " << *p_number8 << std::endl; //Junk value

    //Remember to release the memory
    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    delete p_number8;
    p_number8 = nullptr;

    //Can reuse pointers
    p_number6 = new int (99);
    std::cout << "p_number6: " << p_number6 << std::endl;
    std::cout << "*p_number6: " << *p_number6 << std::endl;

    //Bad to call delete twice on a pointer
    p_number7 = new int(213);
    std::cout << "*p_number7: " << *p_number7 << std::endl;

    delete p_number7;
    delete p_number7;

    std::cout << "The program is finished." << std::endl;

    

    return 0;
}
