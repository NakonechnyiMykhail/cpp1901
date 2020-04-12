#include <iostream>

int subtract(int a, int b)
{
    return a - b;
}

int subtract(int a, int b, int c)
{
    return a - b - c;
}

double subtract(double a, double b)
{
    return a - b;
}

int sum(int a, int b=7, int c=2)
{
    return a + b + c;
}

int sum2(int a=1, int b=7, int c=2)
{
    return a + b + c;
}

// int subtractInteger(int a, int b)
// {
//     return a - b;
// }

// double subtractDouble(double a, double b)
// {
//     return a - b;
// }

int main()
{
    std::cout << subtract(3,6) << '\n';
    std::cout << subtract(3.3,2.4) << '\n';
    std::cout << subtract(3,6,7) << '\n';
    std::cout << sum(3) << '\n';
    std::cout << sum(3, 5) << '\n';
    std::cout << sum2() << '\n';
    return 0;
}