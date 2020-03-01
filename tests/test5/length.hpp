#pragma once
#include "random.hpp"
#include <iostream>

// int getLength(int count, int numberOne, int numberTwo)
// void getLength(int * length, int count)
int getLength()
{
    srand(time( NULL ));
    int count = random(10, 20);
    int length[count];
    int summ = 0;
    for (int i = 0; i < count; i++)
    {
        length[i] = random(31, 9);
        // std::cout << "length["<<i<<"] = " << length[i] << std::endl;
        summ += length[i];
    }
    return summ;
}
