#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <bank.hpp>

class Client
{
public:
    int procent;
    Bank bank_detail;
    Client();
    void print();
};

#endif // CLIENT_HPP
