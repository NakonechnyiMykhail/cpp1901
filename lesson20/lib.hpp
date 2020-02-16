#pragma once
#include <iostream>
#include <string>

int getNameLength(std::string name)
{
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl; //1
    std::cout << "Length: " << name.length() << std::endl; //2
    return name.length();


}