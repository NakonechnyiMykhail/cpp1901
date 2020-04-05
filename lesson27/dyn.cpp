#include <iostream>
#include <cstring>
int main()
{
    std::cout << "Enter a positiv integer: ";
    int length = 0;
    std::cin >> length;
    int *array = new int[length];

    for (int i = 0; i < length; ++i)
        array[i] = 0;

    for (int i = 0; i < length; ++i)
    {
        std::cout << "Enter " << (i+1) << " number of " << length << ": ";
        std::cin >> array[i];
    }

    return 0;
}