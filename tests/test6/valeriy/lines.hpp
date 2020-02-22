#pragma once
#include "random.hpp"   // лучше подключать сторонние сначало,
                        // так как в них тоже есть iostream
                        // в остальных файлах так же
#include <iostream>


int lines()
{
    srand(time(0));
    int counter =  Random(15 , 20);
    int line[counter];
    int summ = 0;
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<"Количество отрезков    = "<<counter<<std::endl;
    std::cout<<"------------------------------------------"<<std::endl;
    for(int i = 0 ; i < counter ; i++)
    {
        line[i]=Random(31 , 39);
        std::cout<<"Отрезок ["<<i<<"]  = "<<line[i]<<std::endl;
        summ +=line[i];
    }
    std::cout<<"-------------------------------------------"<<std::endl;
    std::cout<<"-------------------------------------------"<<std::endl;
    std::cout<<"Общая длина   = "<<summ<<std::endl;

    return summ;
}