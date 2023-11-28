#include <iostream>

int main()
{

    std::cout << "Program begins." << std::endl;

    int *p_number1{new int{97}}; // Points to some address 1

    // Should delete and reset here

    int number1{134}; // stack variable

    p_number1 = &number1; // Now p_number1 points to address 2, but address 1 is still in use by the program
                          // The program lost access to that memory location which causes a memory leak.

    // Double allocation
    int *p_number2{new int{293}};

    // Use the pointer
    // Should delete and reset here.

    p_number2 = new int{12}; // Memory with int {293}
    // Memory with int {293} leaked.

    std::cout << "Program ends." << std::endl;

    return 0;
}