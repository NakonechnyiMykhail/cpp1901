#pragma once
#include "lines.hpp"
#include <iostream>


int speed(const int TIME)
{
    int average = lines()/TIME;
    std::cout<<"Скорость      ="<<average<<std::endl;
    return average;
}