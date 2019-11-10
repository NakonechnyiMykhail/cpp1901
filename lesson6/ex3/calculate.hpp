// #ifndef CALCULATE_HPP
// #define CALCULATE_HPP
// #pragma once
#include <iostream>
using namespace std;

#ifndef PRINT
std::cout << "Not print" << std::endl;
#endif

int add(int a, int b){
    return a+b;
}
int diff(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}


// #endif