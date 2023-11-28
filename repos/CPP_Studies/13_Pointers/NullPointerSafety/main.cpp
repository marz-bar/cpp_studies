#include <iostream>

int main(){

    //Verbose nullptr check
    std::cout << "Verbose nullptr check: " << std::endl;

    
    int *p_number {nullptr};

    p_number = new int (19);

    /*
    if(!(p_number == nullptr))
    {
        std::cout << "p_number points to a VALID address: " << p_number << std::endl;
        std::cout << "p_number: " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an INVALID address." << std::endl;
    }
    */

    if(p_number)
    {
        std::cout << "p_number points to a VALID address: " << p_number << std::endl;
        std::cout << "p_number: " << *p_number << std::endl;
    }
    delete p_number;
    nullptr;

    std::cout << std::endl;
    
    //It is ok to call delete on nullptr
    int *p_number2 {nullptr};

    delete p_number2; //This won't cause any problems

    



    return 0;
}