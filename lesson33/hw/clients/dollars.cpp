#include "dollars.hpp"

Dollars::Dollars(int dollars)
{
    m_dollars = dollars;
}
int Dollars::getDollars() const
{
    return m_dollars;
}
