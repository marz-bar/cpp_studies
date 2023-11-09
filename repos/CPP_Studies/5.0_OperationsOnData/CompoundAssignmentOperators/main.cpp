#include <iostream>

int main()
{
    int value{45};
    std::cout << "The value is: " << value << std::endl;

    std::cout << std::endl;
    value += 5;                                                      // equilvalent to value = value + 5
    std::cout << "The value is (after +=5): " << value << std::endl; // 50

    std::cout << std::endl;
    value -= 5;                                                      // equlivalent to value = value - 5
    std::cout << "The value is (after -=5): " << value << std::endl; // 45

    std::cout << std::endl;
    value *= 2;                                                      // equilvalent to value = value * 2
    std::cout << "The value is (after *=2): " << value << std::endl; // 90

    std::cout << std::endl;
    value /= 3;                                                      // equilvalent to value = value * 2
    std::cout << "The value is (after /=3): " << value << std::endl; // 30

    std::cout << std::endl;
    value %= 11;                                                      // equilvalent to value = value % 11
    std::cout << "The value is (after %=11): " << value << std::endl; // 8
}