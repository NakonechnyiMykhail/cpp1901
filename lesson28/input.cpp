#include <iostream>
#include <cstdint> // std::int16_t
#include <limits>

double getValue()
{
    while(true)
    {
        std::cout << "Enter a value: ";
        double value;
        std::cin >> value;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            return value;
        }
    }

}

char getOperator()
{
    while(true)
    {
        std::cout << "Enter one of the following: +, -, * or /: ";
        char op;
        std::cin >> op;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        if (op == '+' || op == '-' || op == '*' || op == '/')
            return op;
        else
            std::cout << "Oops, that input is invalid. Please try again.\n";
    }

}

void printResult(double value1, char op, double value2)
{
    if (op == '+')
        std::cout << value1 << " + " << value2 << " is " << value1+value2 << '\n';
    else if (op == '-')
        std::cout << value1 << " - " << value2 << " is " << value1-value2 << '\n';
    else if (op == '*')
        std::cout << value1 << " * " << value2 << " is " << value1*value2 << '\n';
    else if (op == '/')
        std::cout << value1 << " / " << value2 << " is " << value1/value2 << '\n';
    else
        std::cout << "Something went wrong: func got an invalid operator.";
}

int main()
{
    // test --------------------------------------------------------------
    // std::int16_t x { 0 }; // -32 768 - 32 767
    // std::cout << "Enter a value between -32 768 - 32 767: ";
    // std::cin >> x;

    // std::int16_t y { 0 }; // -32 768 - 32 767
    // std::cout << "Enter another value between -32 768 - 32 767: ";
    // std::cin >> y;

    // std::cout << "The sum is: " << x + y << '\n';

    // -------------------------------------------------------------------
    double a = getValue();
    char op = getOperator();
    double b = getValue();

    printResult(a,op,b);



    return 0;
}