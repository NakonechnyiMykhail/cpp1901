#include <iostream>
using namespace std; //std::boolalpha, std::cout, std::endl
#define NUMBER 1024
int main()
{
    int x = 0;
    int a(2); // прямая инициализация
    double b{3.2}; // uniform(c++11) инициализация
    float c(3.2e-23);

    bool b1 = true; //false
    // cout << boolalpha << b1 << endl;

    char c1(5);
    char c2('5');
    int ch(c2);
    // cout << c1 << endl;
    // cout << c2 << endl;
    // cout << ch << endl;
    int oct = 012;
    // cout << oct << endl;
    int hex = 0x1F;
    cout << hex << endl;
    int bin = 0b111;
    // cout << bin << endl;

    const int AGE (5); //constexpr

    return 0;
}