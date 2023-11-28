#include <iostream>

int main()
{
    // int *data = new int[1000000000000000000];

    /*
    for(unsigned int i{0}; i < 1000000000; ++i)
    {
        int *data = new int[1000000000];
    }
    */

    // exception
    // std::nothrow

    for (unsigned int i{0}; i < 100; ++i)
    {
        try
        {
            int *data1 = new int[1000000000];
            
        }
        catch (std::exception &ex)
        {
            std::cout << "Something went wrong: " << ex.what() << std::endl;
        }
    }

    for(unsigned int i {0}; i < 100; ++i)
    {
        int *data2 = new (std::nothrow) int[100000000000];

        if(data2 != nullptr) 
        {
            std::cout << "Data allocated" << std::endl;
        }
        else
        {
            std::cout << "Data allocation failed" << std::endl;
        }
    }

    std::cout << "Program finished.." << std::endl;

    return 0;
}
