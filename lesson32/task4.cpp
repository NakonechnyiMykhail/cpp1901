#include <iostream>

// class Boo
// {
// private:

// public:
//     int m_a;
//     int m_b;
// };

class Date
{

    int m_day;
    int m_month;
    int m_year;
public:
// v1
    Date()
    {
        m_day = 1;
        m_month = 1;
        m_year = 2000;
    }
// v2
    Date(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }
//v3
    // Date(int day = 10, int month=5, int year=2020)
    // {
    //     m_day = day;
    //     m_month = month;
    //     m_year = year;
    // }

    void print()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
    }
};

int main()
{
    // Boo b1 = {4, 2};
    // Boo b2 {4,7};
    //v1
    Date d;
    d.print();

    //v2
    Date d2(1,4, 2020);
    d2.print();


    return 0;
}