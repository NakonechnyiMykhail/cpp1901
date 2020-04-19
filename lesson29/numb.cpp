#include <iostream>
#include <cstdint>
int main()
{
    // std::int16_t a = 32767;
    std::uint16_t a = 32767;
    // short b = 32767;
    unsigned short b = 32767;

    std::cout << a << '\n';
    a = a + 1;
    b += 32767;
    std::cout << a << '\n';
    std::cout << b << '\n';

    return 0;
}