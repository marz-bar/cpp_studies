#include <iostream>

int main(){

    /*
    //Case 1 - Uninitialized pointer
    int *p_number1; //Dangling uninitialized pointer

    std::cout << std::endl;
    std::cout << "Case 1: Uninitialized pointer: ." << std::endl;
    std::cout << "p_number1: " << p_number1 << std::endl;
    std::cout << "*p_number1: " << *p_number1 << std::endl; //Crash
    


    //Case 2
    std::cout << std::endl;
    std::cout << "Case 2: Deleted pointer" << std::endl;
    int *p_number2 {new int {67}};

    std::cout << "*p_number2 (before delete): " << *p_number2 << std::endl;

    delete p_number2;

    std::cout << "*p_number2 (after delete): " << *p_number2 << std::endl;

    //Case 3: Multiple pointers pointing to the same address
    std::cout << std::endl;
    std::cout << "Case 3: Multiple pointers pointing to the same address" << std::endl;

    int *p_number3 {new int {99}};
    int *p_number4 {p_number3};

    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    //Deleting p_number3
    delete p_number3;

    //p_number4 points to deleted memory. Dereferencing it will lead to 
    //undefined behavior: Crash/garbage
    std::cout << "p_number4 (after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;
    
    
    //Solution 1: Initialize your pointers immediately upon declaration

    std::cout << std::endl;
    std::cout << "Solution 1: " << std::endl;

    int *p_number5 {nullptr};
    int *p_number6 {new int {12}};

    //Check for nullptr before use
    if(p_number6 != nullptr)
    {
        std::cout << "*p_number6: " << *p_number6 << std::endl;
    }
    else
    {
        std::cout << "Invalid address" << std::endl;
    }
    

    //Solution 2: Right after you call delete on a pointer, remember to reset
    //the pointer to nullptr to make it CLEAR it doesn't point anywhere

    std::cout << std::endl;
    std::cout << "Solution 2: " << std::endl;
    int *p_number7 {new int {64}};

    //Use the pointer
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;

    delete p_number7; 
    p_number7 = nullptr; //Reset the pointer

    //Check for nullptr before use
    if(p_number7 != nullptr)
    {
        std::cout << "*p_number7: " << *p_number7 << std::endl;
    }
    else
    {
        std::cout << "Invalid memory access!" << std::endl;
    }
    */

    


    //Solution 3:
    //For multiple pointers pointing to the same address, make sure there is 
    //one clear pointer (main pointer) that owns the memory (responsible for releasing when neccessary).
    //Other pointers(secondary) should only be able to dereference when the main pointer is valid

    std::cout << std::endl;
    std::cout << "Solution 3: " << std::endl;
    int *p_number8 {new int {119}}; // p_number8 is the main pointer
    int *p_number9 {p_number8};

    //Dereference the pointers and use them
    std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;

    if(!(p_number8 == nullptr)) //Only use secondary pointers when main pointer is valid
    {
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    } 

    delete p_number8; //Main releases the memory
    p_number8 = nullptr;

    //Check for nullptr before use
    if(!(p_number8 == nullptr))
    {
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }
    else
    {
        std::cerr << "Warning: Trying to use an invalid pointer" << std::endl;
    }


    return 0;
}