#include <iostream>
#include <string>
#include <sstream> // std::stringstream
#include <cstdlib> // exit()

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        if (argv[0])
            std::cout << "Usage: " << argv[0] << " <number> " << '\n';
        else
            std::cout << "Usage: <program name> <number>" << '\n';

        exit(1);
    }

    std::stringstream convert(argv[1]);

    int number;
    if (!(convert >> number))
        number = 0;

    std::cout << "Got integer: " << number << '\n';

    return 0;
}
/*

C-style convertation
    number = atoi(argv[1]);
    atof = float ...

~/cpp1901/lesson30/ (master) $ ./args2
Usage: ./args2 <number>
~/cpp1901/lesson30/ (master) $ ./args2 Mike
Got integer: 0
~/cpp1901/lesson30/ (master) $ ./args2 12
Got integer: 12

*/