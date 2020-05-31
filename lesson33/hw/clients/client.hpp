#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdint> // std::int16_t
#include <limits>

#include "date.hpp"
#include "email.hpp"
#include "job.hpp"
#include "credit.hpp"
#include "money.hpp"
//#include "Children.hpp"

class Client
{
public:
    enum Children
    {
        ZERO, // = 0
        ONE,
        TWO,
        THREE,
        //...
    };
private:
    std::string                 m_first_name;       // name
    std::string                 m_last_name;        // surname
    std::string                 m_middle_name;      // mMiddleName
    std::uint8_t                age;                // NOT uint_8 -> char

    std::uint8_t                m_bDay;             // birthday_day
    std::uint8_t                m_bMonth;           // birthday_month
    std::uint16_t               m_bYear;

    bool                        m_married;          // is_married
    // class Property
    std::vector <std::string>   m_property;

    Children                    m_child;
    Date                        m_date;
    Email                       m_mail;

    Job                         m_job;
    Money                       m_money;
    Credit                      m_credit;
public:
    Client();
    Client( std::string firstName,
            std::string middleName,
            std::string lastName,
            std::uint8_t age,
            std::uint8_t day,
            std::uint8_t month,
            std::uint16_t year,
            Date date) : m_date(date);

    ~Client();
    void printClient();
    void setDate();
    Date getDate();
    void setJob();
    Job getJob();
    void setMoney();
    Money getMoney();
    void setEmail();
    Email getEmail();
    void setChildren();
    Children getChildren();
    void setCredit();
    Credit getCredit();


};

#endif // CLIENT_HPP
