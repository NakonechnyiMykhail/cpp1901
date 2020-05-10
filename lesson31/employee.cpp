#include <iostream>
#include <string>

class DateClass
{
public:
    int m_day;
    int m_month;
    int m_year;

    void print()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
    }
};

class Employee
{
public:
    std::string m_name;
    int m_id;
    double m_wage;
    DateClass m_date;

    void print()
    {
        std::cout << "Name: " << m_name <<
                    "\nID: " << m_id <<
                    "\nWage: $" << m_wage << std::endl;
    }

    // void set(std::string name, int id, double wage)

    void setName(std::string name)
    {
        m_name = name;
    }

    void setId(int id)
    {
        m_id = id;
    }
};
// ====================================================================================

int main()
{

    Employee john { "John", 5, 20.00};
    Employee ivan { "Ivan", 7, 70.00};

    john.print();
    std::cout << "============================================" << std::endl;
    ivan.print();
    std::cout << "============================================" << std::endl;
    john.setId(10);
    john.print();
    return 0;
}