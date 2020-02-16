#include <iostream>
#include <string>
#include <ctime>
#include "lib.hpp"

long int random();
int main()
{
    srand(time(0));
    std::string name = "";
    int summ = 0;
    int summ2 = 0;
    int length = getNameLength(name);
    int array[length];// ={}
    // for(int i = 0; i < length; i++) {
    //     array[i] = 0;
    // }

    for(int i = 0; i < length; i++) {
        array[i] = random();
        // std::cout << "array[" << i << "] = " << array[i] << std::endl;
        summ += array[i]; // summ = summ + array[i];
        if (array[i]%2 == 0) summ2 += array[i];
    }
    std::cout << "avarage:      " << (float)summ/length  << std::endl;
    std::cout << "summa:        " << summ                << std::endl;
    std::cout << "summa per 2:  " << summ2               << std::endl;

    return 0;
}

long int random()
{
    return 1 + rand() % 50; // от 1 до 50
}