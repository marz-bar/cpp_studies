#include <iostream>

int main(){
    int scores[10] {11,12,13,14,15,16,17,18,19,20};
    int *p_scores {scores};

/*
    std::cout << "Values in scores array (p_score pointer increment): " << std::endl;

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //11
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //12
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //13
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //14
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //15
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //16
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //17
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //18
    ++p_scores; // Move forward by sizeof(int): 4 bytes 

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //19
    ++p_scores; // Move forward by sizeof(int): 4 bytes

    std::cout << "Address: " << p_scores << " value: " << *(p_scores) << std::endl; //20
    ++p_scores; // Move forward by sizeof(int): 4 bytes
*/
/*  
    std::cout << std::endl;
    std::cout << "Explicit addition of integer: " << std::endl;

    p_scores = scores; // Reset the pointer to the start of array
    std::cout << "scores[4]: " << *(p_scores + 4) << std::endl; //Move forward by 4 * sizeof(int)
*/
/*
    //Can use loops to print these things out easier
    p_scores = scores;
 
    std::cout << std::endl;
    std::cout << "Pointer arithmetic on p_scores pointer and a for loop: " << std::endl;
    for(unsigned int i {0}; i < std::size(scores); ++i)
    {
        std::cout << "Value: " << *(scores + i ) << std::endl;
    }
*/
/*
    //Can print elements in reverse order
    std::cout << std::endl;
    std::cout << "Elements in reverse order with decrementing pointer arithmetic: " << std::endl;
    for(unsigned int i {std::size(scores)}; i > 0; --i)
    {
        std::cout << "Value: " << *(scores + i -1) << std::endl;
    }
*/
/*
    //Print in reverse order with -- operator on p_score
    std::cout << std::endl;
    std::cout << "Elements in reverse order -- arithmetic on the p_scores pointer: " << std::endl;
    p_scores = scores + std::size(scores) - 1;
    for(unsigned int i {std::size(scores)}; i > 0; --i)
    {
        std::cout << "Value: " << *(p_scores--) << std::endl;
    }
*/
/*
    //Can print the elements in reverse order with array index
    std::cout << std::endl;
    std::cout << "Elements in reverse order with array index notation: " << std::endl;
    for(unsigned int i{std::size(scores)}; i > 0; --i)
    {
        std::cout << "Values: " << scores[i - 1] << std::endl;
    }
*/

    //Making sure pointer is pointing to the first element in the array
    p_scores = scores; // scores == scores[0]

    scores[0] = 31; //Array index notation
    *(scores + 1) = 32; //Equilvalent to scores[1] = 32. Pointer arithmetic on array name
    *(p_scores + 2) = 33; //Equilvalent to scores[2] = 33. Pointer arithmetic on p_score pointer

    std::cout << std::endl;
    std::cout << "Printing out the array after modification of 3 first elements: " << std::endl;
    for(unsigned int i{0}; i < std::size(scores); ++i)
    {
        std::cout << "Value: " << scores[i] << std::endl;        
    }

    return 0;
}