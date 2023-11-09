#include <iostream>
using namespace std;

int main()
{
    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int result = a + b * c - d / e - f + g; //  6 +  24  -   3 - 2 + 5

    cout << "result : " << result << endl;

    result = a / b * c + d - e + f; //   16 + 9 - 3 + 2
    cout << "result : " << result << endl;

    result = (a + b) * c - d / e - f + g; // 72-3-2+5
    cout << "result () : " << result << endl;

    /*

    int num1, num2, num3, num4,
        num5, num6, num7 = 0;
    int fake_numbers[] = {num1, num2, num3, num4,
                          num5, num6, num7};

    for (int i = 0; i <= 7; i++)
    {
        fake_numbers[i] = rand() % 100 + 1;
    }
    int results = num1 + num2 * num3 - num4/num5 - num6 + num7;
    cout << results << endl;

    */
}
