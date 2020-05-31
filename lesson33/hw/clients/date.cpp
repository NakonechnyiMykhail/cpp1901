#include "date.hpp"
// v1
Date::Date()
{
    m_day = 1;
    m_month = 1;
    m_year = 2000;
}
// v2
Date::Date(const Date &d)
{
    m_day = d.m_day;
    m_month = d.m_month;
    m_year = d.m_year;
}
//3
Date::Date(std::uint8_t day, std::uint8_t month, std::uint16_t year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}
void Date::printDate()
{
    std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
}
