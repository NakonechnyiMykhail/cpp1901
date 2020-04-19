#include <iostream>

int fibonacci(int number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;
    return fibonacci(number-1) + fibonacci(number-2);
}

int main()
{
    for (int count=0; count < 10; ++count)
        std::cout << fibonacci(count) << " ";

    return 0;
}

/* index / result
 * 0 = 0
 * 1 = 1
 * 2 = 2-1 + 2-2 => 1
 * 3 = 3-1 + 3-2 = (2) + 1 = (2-1 + 2-2) + 1 => 2
 * 4 = 4-1 + 4-2 = (3) + (2) = (3-1 + 3-2) + (2-1 + 2-2) = ((2) + 1) + 1 = (2-1 + 2-2) + 1 + 1 = 1 + 1 + 1 => 3
*/