#ifndef DATE_HPP
#define DATE_HPP
#include <iostream>
#include <cstdint> // std::int16_t

class Date
{
    std::uint8_t m_day;
    std::uint8_t m_month;
    std::uint16_t m_year;
public:

    Date();
    Date(const Date &d);
    Date(std::uint8_t day, std::uint8_t month, std::uint16_t year);
    void printDate();
};

#endif // DATE_HPP
