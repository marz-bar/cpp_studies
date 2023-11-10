#include <iostream>
#include <ctime>

int linear_search(int sample_array[], int size, int target)
{
    for (unsigned int i{0}; i < size; ++i)
    {
        // Returns the index position if target found, else returns -1
        if (sample_array[i] == target)
        {
            return i;
        }        
    }
    return -1;
}

void verify(int index)
{
    if (index != -1)
    {
        std::cout << "Target found in list at index: " << index << std::endl;
    }
    else
    {
        std::cout << "Target not found in list." << std::endl;
    }
}

int main()
{
    /*Using the code block below to test if linear search and verify function work correctly.
    //Using a small array to verify linear search works.
    int numbers[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int ARRAY_SIZE{std::size(numbers)};
    
    int target {6};
    int results{};

    results = linear_search(numbers,ARRAY_SIZE,target);
    verify(results);
    */

    /*
    Using an array of randomly generated numbers, 1-100, the user will input a number
    and linear search will check if the number exists in the array.
    */
    std::srand(std::time(0));
    int randomArray[100];
    const int RANDOM_ARRAY_SIZE {std::size(randomArray)};
    
    //Assigned each element a random number from 1-100
    for(unsigned int i {0}; i < RANDOM_ARRAY_SIZE; ++i)
    {
        randomArray[i] = (std::rand() % 100) + 1;
    }
    
    //Verifying the array has 100 random values.
    //for(auto v: randomArray){ std::cout << v << " "; };
    int target {};

    std::cout << "Enter a number, 1-100. I will check if it exists in this list: ";
    std::cin >> target;

    //Running linear search and checking if the number exists.
    verify(linear_search(randomArray,RANDOM_ARRAY_SIZE,target)); 




    return 0;
}