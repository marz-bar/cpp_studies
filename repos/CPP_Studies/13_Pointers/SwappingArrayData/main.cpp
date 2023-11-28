#include <iostream>

int main(){
    //Swapping data the hard way
/*
    int arr0[5] {1,2,3,4,5};
    int arr1[5] {6,7,8,9,10}; 
    int temp [5];

    std::cout << "Before the swap." << std::endl;

    std::cout << "arr 0: "; 
    for(auto value: arr0){std::cout << value; }
    
    std::cout << std::endl;
    
    std::cout << "arr 1: "; 
    for(auto value: arr1){std::cout << value; }

    //Move data from arr1 into temp array
    for(unsigned int i {}; i < std::size(arr1); ++i)
    {
        temp[i] = arr1[i];
    }

    //Move data from arr0 to arr1
    for(unsigned int i {}; i < std::size(arr0); ++i)
    {
        arr1[i] = arr0[i];
    }

    //Move data from temp to arr0
    for(unsigned int i {}; i < std::size(temp); ++i)
    {
        arr0[i] = temp[i];
    }

    std::cout << std::endl; 
    std::cout << "--------------------" << std::endl;

    std::cout << "After the swap." << std::endl;
    
    std::cout << "arr 0: "; 
    for(auto value: arr0){std::cout << value; }
    
    std::cout << std::endl;
    
    std::cout << "arr 1: "; 
    for(auto value: arr1){std::cout << value; }
    std::cout << std::endl;
    
*/
    //Swapping arrays via pointers
    int arr3[5]{1,2,3,4,5};
    int *p_arr3 {arr3};

    int arr4[5]{6,7,8,9,10};
    int *p_arr4 {arr4};
    
    std::cout << "Before the swap." << std::endl;
    std::cout << "arr 3: "; 
    for(unsigned int i {0}; i < std::size(arr3); ++i)
    {
        //p_arr3[i] - array index notation while line 65 is pointer arithmetic notation
        std::cout << *(p_arr3 + i) << " "; 
    }
    
    std::cout << std::endl;
    
    std::cout << "arr 4: "; 
    for(unsigned int i {0}; i < std::size(arr4); ++i)
    {   
        //p_arr4[i] - array index notation
        std::cout << *(p_arr4 + i) << " "; 
    }
    std::cout << std::endl;

    int  *temp{nullptr};

    temp = p_arr4;
    p_arr4 = p_arr3;
    p_arr3 = temp;

    std::cout << "After the swap." << std::endl;
    std::cout << "arr 3: "; 
    for(unsigned int i {0}; i < std::size(arr3); ++i)
    {
        std::cout << *(p_arr3 + i) << " "; 
    }
    
    std::cout << std::endl;
    
    std::cout << "arr 4: "; 
    for(unsigned int i {0}; i < std::size(arr4); ++i)
    {
        std::cout << *(p_arr4 + i) << " "; 
    }
    std::cout << std::endl;

    return 0;
}