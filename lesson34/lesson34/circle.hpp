#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <iostream>

class Circle
{
private:
    std::string m_color = "red";
    double m_radius = 20.0;
public:
    Circle();
    Circle(std::string color);
    Circle(double radius);
    Circle(std::string color, double radius);
    void print();
};

#endif // CIRCLE_HPP

