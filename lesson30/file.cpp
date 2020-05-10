#include <iostream>
#include <fstream> //std::ofstream
#include <cstdlib> // exit

int main()
{
    std::fstream file("SomeText.txt", std::ios::in | std::ios::out);


    if(!file)
    {
        std::cerr << "FileNmae.txt could not be opened for writing/reading!" << std::endl;
        exit(1);
    }




    return 0;
}