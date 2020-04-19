#include <iostream>

int sumCount(int value)
{
    if (value <= 0)
        return 0;
    else if (value == 1)
        return 1;
    else
        return sumCount(value - 1) + value; // 4 + .. + 3 + .. + 2 + .. + 1 = 10

}

int main()
{
    std:: cout << sumCount(4) << '\n';

    return 0;
}