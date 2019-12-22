#include <iostream>
#include <sstream>
int main()
{
    int v = 0b1111; // 15 in decimal
    std::cout << "The number 42 in octal:   " << std::oct << 42 << '\n'
              << "The number 42 in decimal: " << std::dec << 42 << '\n' // v
              << "The number 42 in hex:     " << std::hex << 42 << '\n';
    int n; // = 0x2a; -> hex
    std::istringstream("2A") >> std::hex >> n;
    std::cout << std::dec << "Parsing \"2A\" as hex gives " << n << '\n';
    // the output base is sticky until changed
    std::cout << std::hex << "42 as hex gives " << 42
        << " and 21 as hex gives " << 21 << '\n';



    // int v = 0b1111; // 15 in decimal

    // std::cout << std::bitset<4>(v) << std::endl;
}