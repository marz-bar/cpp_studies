#include <iostream>

int main()
{
    // Declare pointer and reference
    double double_value{12.34};
    double &ref_double_value{double_value}; // Reference to double_value
    double *p_double_value{&double_value};  // Pointer to double_value

    // Reading
    std::cout << "double_value: " << double_value << std::endl;         // Value
    std::cout << "ref_double_value: " << ref_double_value << std::endl; // Reference
    std::cout << "p_double_value: " << p_double_value << std::endl;     // Address pointer
    std::cout << "*p_double_value: " << *p_double_value << std::endl;   // Dereference pointer

    // Writing through pointer
    *p_double_value = 15.44;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;         // Value
    std::cout << "ref_double_value: " << ref_double_value << std::endl; // Reference
    std::cout << "p_double_value: " << p_double_value << std::endl;     // Address pointer
    std::cout << "*p_double_value: " << *p_double_value << std::endl;   // Dereference pointer

    //Writing through reference
    ref_double_value = 18.44;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;         // Value
    std::cout << "ref_double_value: " << ref_double_value << std::endl; // Reference
    std::cout << "p_double_value: " << p_double_value << std::endl;     // Address pointer
    std::cout << "*p_double_value: " << *p_double_value << std::endl;   // Dereference pointer


    //Attempting to make a reference look elsewhere
    double another_double_value {99.11};
    ref_double_value = another_double_value;

    std::cout << "Attempting to make a reference look elsewhere.." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;         // Value
    std::cout << "ref_double_value: " << ref_double_value << std::endl; // Reference
    std::cout << "p_double_value: " << p_double_value << std::endl;     // Address pointer - still looking at the same memory location
    std::cout << "*p_double_value: " << *p_double_value << std::endl;   // Dereference pointer


    //Attempting to make a pointer look elsewhere
    p_double_value = &another_double_value;

    std::cout << "Attempting to make a pointer look elsewhere.." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;         // Value
    std::cout << "ref_double_value: " << ref_double_value << std::endl; // Reference
    std::cout << "&double_value: " << &double_value << std::endl;         // Value address
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl; // Reference address
    std::cout << "p_double_value: " << p_double_value << std::endl;     // Address pointer - changed to a new address
    std::cout << "*p_double_value: " << *p_double_value << std::endl;   // Dereference pointer

    std::cout << std::endl;
    *p_double_value = 9123.82;

    std::cout << "double_value: " << double_value << std::endl;         // Value
    std::cout << "ref_double_value: " << ref_double_value << std::endl; // Reference
    std::cout << "&double_value: " << &double_value << std::endl;         // Value address
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl; // Reference address
    std::cout << "p_double_value: " << p_double_value << std::endl;     // Address pointer - changed to a new address
    std::cout << "*p_double_value: " << *p_double_value << std::endl;   // Dereference pointer
    
    return 0;
}