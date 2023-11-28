#include <iostream>

int main()
{

    const size_t SIZE{10};

    // Different ways to declare an array dynamically and how they are initialized

    double *p_salaries{new double[SIZE]}; // salaries array will contain garbage values

    int *p_students{new (std::nothrow) int[SIZE]{}}; // All values initialized to 0

    double *p_scores{new (std::nothrow) double[SIZE]{1, 2, 3, 4, 5}}; // Allocating memory space for an array of size double
                                                                      // First  5 will be initialized with 1,2,3,4,5 and the rest
                                                                      // will be 0's.
    if (p_scores)
    {
        std::cout << "Size of scores (it's a regular pointer): " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores. " << std::endl;

        // Print out elements. Can use regular array access notation or pointer arithmetic notation
        for (size_t i{}; i < SIZE; ++i)
        {
            std::cout << "value: " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }

    // Releasing memory (Array version)
    delete[] p_salaries;
    p_salaries = nullptr;

    delete p_students;
    p_students = nullptr;

    delete p_scores;
    p_scores = nullptr;

    std::cout << std::endl;

    // Pointers intialized with dynamic arrays are different from arrays:
    // std::size doesn't work and they don't support range bnased for loops

    double *temperatures = new double[SIZE]{10.4, 12.3, 523.2, 132.34, 9.1, 10.5, 2.3, 23.7, 10.0, 19.1};

    // std::cout << "std::size(temperatures): " << std::size(temperatures) << std::endl; // Error

    // Error: temperatures doesn't have array properties that are needed for the range based for loop to work.
    // for(double temp: temperatures)
    //{
    //     std::cout << "temperature: " << temp << std::endl;
    // }

    // Dynamically allocated array has decayed into a pointer.

    // Static arrays vs dynamic arrays
    std::cout << "=====================================" << std::endl;

    int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Lives on the stack

    std::cout << "scores size : " << std::size(scores) << std::endl;
    for (auto s : scores)
    {
        std::cout << "value : " << s << std::endl;
    }

    int *p_scores2 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Lives on the heap.
                                                                 // std::cout << "p_scores1 size : " << std::size(p_scores) << std::endl;
    /*
    for( auto s : p_scores1){
        std::cout << "value : " << s << std::endl;
    }
    */

    return 0;
}