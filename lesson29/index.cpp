#include <iostream>

int main()
{
    // int a = 5;
    // int b = ++a;

    // std::cout << a << '\n';
    // std::cout << b << '\n';

    // int x = 5;
    // int y = x++;

    // std::cout << x << '\n';
    // std::cout << y << '\n';

    int m = 5, n = 5;

    std::cout << m << " " << n << '\n';
    std::cout << ++m << " " << --n << '\n'; // префикс <--
    std::cout << m << " " << n << '\n';
    std::cout << m++ << " " << n-- << '\n'; // постфикс
    std::cout << m << " " << n << '\n';

    // декремент -
    // инкремент +


    return 0;
}