#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <iostream>
#include <string>

class Employee
{
private:
    int m_id;
    std::string m_name;
public:
    Employee(int id = 0, const std::string &name="");
    Employee(const std::string &name);
};

#endif // EMPLOYEE_HPP
