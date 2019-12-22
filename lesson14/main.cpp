#include <iostream>
#include "func.hpp"
using namespace std;
void print(); //prototype
char getSymbol(); //prototype
int main()
{
    char a = 'x';
    char arr[] = {'h','e','l','l'};
    int arrInt[] = {1,2,3,4};
    print();
    a = getSymbol();                // v1
    cout << getSymbol() << endl;    // v2
    return 0;
}

char getSymbol()
{
    char symbol = '0';
    cin >> symbol;
    return symbol;
}
