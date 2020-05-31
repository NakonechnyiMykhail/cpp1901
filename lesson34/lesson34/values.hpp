#ifndef VALUES_HPP
#define VALUES_HPP
#include <iostream>
#include "circle.hpp"

class Values
{
private:
    int m_v1;
    int m_v2;
    int m_v3;
    const int m_arr[5];
    Circle m_circle;
    // m_ -> member
public:
    Values();
    Values(double v);
    Values(int v1, int v2, int v3);
    void print();
};

#endif // VALUES_HPP
