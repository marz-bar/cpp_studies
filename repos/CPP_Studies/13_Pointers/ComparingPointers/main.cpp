#include <iostream>

int main(){
    
    int scores[10] {11,12,13,14,15,16,17,18,19,20};

    int *pointer1 {&scores[0]};
    int *pointer2 {&scores[9]};
    
    std::cout << pointer1 << std::endl;
    std::cout << *pointer1 << std::endl;

    std::cout << pointer2 << std::endl;
    std::cout << *pointer2 << std::endl;

    //Comparing pointers
    //The further you go in the array, the bigger the address
    std::cout << "Comparing pointers: " << std::boolalpha << std::endl;

    std::cout << "pointer1 > pointer2: " << (pointer1 > pointer2) << std::endl;
    std::cout << "pointer1 < pointer2: " << (pointer1 < pointer2) << std::endl;
    std::cout << "pointer1 >= pointer2: " << (pointer1 >= pointer2) << std::endl;
    std::cout << "pointer1 <= pointer2: " << (pointer1 <= pointer2) << std::endl;
    std::cout << "pointer1 == pointer2: " << (pointer1 == pointer2) << std::endl;
    std::cout << "pointer1 != pointer2: " << (pointer1 != pointer2) << std::endl;



    return 0;
}