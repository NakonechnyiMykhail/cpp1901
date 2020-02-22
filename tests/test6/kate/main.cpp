#include <iostream>
// #include <string>    // зачем?
// #include <cstdlib>   // зачем?
#include <ctime>

long int random(int start, int end); // где входные параметры?

int main(){
    srand(time(0));
    int count = random(15, 20);
    int S=0;    // название переменных и функций с маленьких символов
    int Len=0;  // название переменных и функций с маленьких символов
    const int t=5;
    int averspeed =0;
    int mass[count];//вот объявление массива
    for (int i =0; i < count; i++)
    {
        mass[i]=0;// где ты создала этот массив?
    }
    for (int i=0; i<count; i++)
    {
        mass[i]=random(31,39);
        S+=mass[i];
    }
    // for (int i=0; i<time;i++)// что за time? это зарезервированное название
    for (int i=0; i<count;i++)
    {
        mass[i]=random(31,39);
        Len+=mass[i];
    }
    std::cout<<"Отчет работы программы "                    <<std::endl;
    std::cout<<"Количество отрезков "   <<count             <<std::endl;
    std::cout<<"Первый отрезок"         <<mass[0]           <<std::endl;
    std::cout<<"Любой отрезок "         <<mass[5]           <<std::endl;
    std::cout<<"Общая длина "           <<S                 <<std::endl;
    std::cout<<"Средняя скорость "      <<(float)averspeed  <<std::endl;

  return 0;
}
long int random(int start, int end)
{
    // int x=0; int y = 0; // это переменные внутри функции а не входные параметры
    return start + rand()%end; // проверь промежуток задаваемый
}