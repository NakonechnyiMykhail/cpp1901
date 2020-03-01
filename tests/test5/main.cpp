#include <iostream>
#include <ctime>
#include "velocity.hpp"
// #include "length.hpp"

int main()
{
    // srand( (unsigned)time( NULL ) );

    const int timer = 10;
    // int array[COUNT];
    // std::cout << "avarage velocity = " << velocity((int *)array, 10, 20) << std::endl;
    std::cout << "avarage velocity = " << velocity(timer) << std::endl;

    // getLength((int *)array, COUNT);
    // getLength(COUNT);
    // for (int i = 0; i < COUNT; i++)
        // std::cout << i << " " << array[i] << std::endl;
    return 0;
}