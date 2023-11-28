#include <iostream>

int main(){

    /*   
    //Declare and initialize pointer
    int *p_number1 {}; //Will initialize with nullptr
    double *p_fractional_number1 {};

    //Explicitly initialize with nullptr
    int *p_number2 {nullptr};
    int *p_fractional_number2 {nullptr};

    //Pointers to different variables of the same size
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
    std::cout << "sizeof(double*): " << sizeof(double*) << std::endl;
    
    std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << std::endl;

    std::cout << std::endl;

    //Location of the * when declaring a variable name doesn't matter
    int*  p_number3 {nullptr};
    int * p_number4 {nullptr};
    int  *p_number5 {nullptr};

    int *p_number6{}, other_int_var1{}; //Declaring a pointer and non pointer variable on the same line
    int* p_number7{}, other_int_var2{}; //can lead to confusion when reading code. 

    std::cout << "sizeof(p_number6): " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var1): " << sizeof(other_int_var1) << std::endl;

    std::cout << "sizeof(p_number7): " << sizeof(p_number7) << std::endl;
    std::cout << "sizeof(other_int_var2): " << sizeof(other_int_var2) << std::endl;

    std::cout << std::endl;

    //It is better to separate the declarations
    int *p_number8 {nullptr};
    int other_int_var3 {};

    */

    //Initialzing pointers and assigning them data
    //We know that pointers store addresses of variables
    int example_number1 {43};
    int *p_int1 {&example_number1}; //The address operator (&);

    std::cout << "Example number 1: " << example_number1 << std::endl;
    std::cout << "p_int (Address in memory): " << p_int1 << std::endl;

    //You can also change the address stored in a pointer any time
    int example_number2 {65};
    p_int1 = &example_number2; //Assign a different address to the pointer
    std::cout << "p_int (with different address): " << p_int1 << std::endl;

    //Can't cross assign between pointers of different types
    int *p_int2 {nullptr};
    double example_number3 {33.2};

    //p_int2 = example_number3; //compiler error

    std::cout << std::endl;

    //Dereferencing a pointer: 
    int *p_int3 {nullptr};
    int example_number4 {199};
    p_int3 = &example_number4;

    std::cout << "Value: " << *p_int3 << std::endl; //Dereferencing a pointer

    return 0;
}