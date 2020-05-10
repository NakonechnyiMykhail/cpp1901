#include <iostream>

// ====================================================================================
struct DateStruct
{
    int day;
    int month;
    int year;
};

void printDate(DateStruct &date)
{
    std::cout << date.day << "/" << date.month << "/" << date.year << std::endl;
}
// ====================================================================================

class DateClass
{
//public:
    int m_day;
    int m_month;
    int m_year;

    void print()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
    }
};


// ====================================================================================

int main()
{
    // struct
    // DateStruct today { 13, 10, 2019};
    // today.day = 20;
    // printDate(today);


    DateStruct today;
    today.day = 12;

    //===================================================


    // class
    DateClass today { 13, 10, 2019};
    today.m_day = 20; // X <= private
    today.print();


    return 0;
}