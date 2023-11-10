#include <iostream>
#include <ctime>
#include <cmath>
#include <algorithm>

/*
Binary search is O(log N) because the algorithm takes an additional step each time the
data doubles.

Binary search works when the array is sorted.
*/

int binary_search(int sample_array[], int size, int target)
{

    std::sort(sample_array, sample_array + size);

    int first{0};
    int last{size - 1};

    while (first <= last)
    {
        int midpoint = floor((first + last) / 2);

        if (sample_array[midpoint] == target)
        {
            return midpoint; // Best case scenario
        }

        else if (sample_array[midpoint] < target)
        {
            first = midpoint + 1;
        }

        else
        {
            last = midpoint - 1;
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
    /*
    //Testing if binary search and verify function work
    int sampleArray[10]{1,2,3,4,5,6,7,8,9,10};
    const int SIZE{std::size(sampleArray)};

    int target{7};

    verify(binary_search(sampleArray, SIZE, target));
    */

    std::srand(std::time(0));
    int largeSampleArray[100]{};
    const int SIZE{std::size(largeSampleArray)};
    int target{};
    
    // Assigned each element a random number from 1-100
    for (unsigned int i{0}; i < SIZE; ++i)
    {
        largeSampleArray[i] = (std::rand() % 100) + 1;
    }

    std::cout << "Enter a number between 1 and 100. I will check if it exists in the list: ";
    std::cin >> target;
    verify(binary_search(largeSampleArray, SIZE, target));

    
    return 0;
}