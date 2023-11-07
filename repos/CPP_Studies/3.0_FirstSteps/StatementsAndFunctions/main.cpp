#include <iostream>

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers(int first_param, int second_param)
{
    int result = first_param * second_param;
    return result;
}

int main()
{
    int firstNumber{5};
    int secondNumber{10};
    int sum = firstNumber + secondNumber;
    std::cout << "The total using no function is: " << sum << std::endl;

    sum = addNumbers(30, 70);
    std::cout << "The total is using the function addNumbers to sum up 30 + 70 = " << sum << std::endl;

    std::cout << "The total is using the function within this statement of 1 + 2 = " << addNumbers(1, 2) << std::endl;

    int multi = multiplyNumbers(64, 3);
    std::cout << "After multiplying, the total is: " << multi << std::endl;

    return 0;
}
