#include "employee.hpp"

Employee::Employee(int id, const std::string &name)
    : m_id(id), m_name(name)
{
    std::cout << "Employee: " << m_name << " created.\n";
}
Employee::Employee(const std::string &name)
    : Employee(0, name)
{}
