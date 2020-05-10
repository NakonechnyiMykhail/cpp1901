#include <iostream>

int main()
{
    int i = 5;
    while(i < 0) // true -> false (exit)
    {
        std::cout << i << std::endl;
        --i;
    }

    do
    {
        std::cout << i << std::endl;
        --i;
    } while(i < 0);

    return 0;
}