#include "client.hpp"

Client::Client()
{
    std::cout << "Client clear constructor" << std::endl;
}
Client::Client(
        std::string firstName,
        std::string middleName,
        std::string lastName,
        std::uint8_t age,

        std::uint8_t day, std::uint8_t month, std::uint16_t year)
    : Date m_date(std::uint8_t day, std::uint8_t month, std::uint16_t year)
{

    m_bDay = day;
    m_bMonth = month;
    m_bYear = year;
    setDate(m_bDay, m_bMonth, m_bYear);
//    m_date(m_bDay, m_bMonth, m_bYear);
}
Client::~Client()
{

}
void Client::printClient()
{
    std::cout << "print";
}

void Client::setDate(std::uint8_t day, std::uint8_t month, std::uint16_t year)
{
    m_date(day, month, year);
}
Date Client::getDate(){}
void Client::setJob(){}
Job Client::getJob(){}
void Client::setMoney(){}
Money Client::getMoney(){}
void Client::setEmail(){}
Email Client::getEmail(){}
void Client::setChildren(){}
Children Client::getChildren(){}
void Client::setCredit(){}
Credit Client::getCredit(){}
