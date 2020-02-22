#pragma once
#include <iostream>

long int Random(int min, int max)
{
    // srand(time(0)); // должно быть в месте вызова функции или в основной функции
    return min + rand() % (max - min);
}