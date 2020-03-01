#pragma once
#include <ctime>

long int random(int startNumber, int endNumber)
{
    return startNumber + rand() % endNumber; // от 1 до 50
}