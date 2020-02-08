// Yarovoy Valeriy task-1 02.02.2020
//
// 1. Самое первое я просил сделать реализация в отдельно файле
//     (заголовочном ИЛИ в нашей библиотеке)
//
// 2. Программа должна для ЮЗЕРА смотреться великолепно! К примеру так:
//     Enter your name: Mike
// --> Hello, Mike! Your name has 4 characters.
//
//     и тд. Ты должен программу продать! Если программа мега крутая с
//     современным решением глобальных проблем, но выглядит так себе,
//     ПРОГРАММУ НЕ ПРОДАТЬ!
//
// 3. Оформление кода. Пробелы не влияют на скорость, но на читабельность
//     влияют. Тоже относится и к промежуткам между строками. По названиям
//     переменных почти все хорошо. Я бы переназвал "суммы" более полноценно.
//
//     К примеру:
//     sum -> fullSumm or summOfAllNumbers     (что-то вроде этого)
//     с другой также
//     и здесь -> ranNumber ... больше похоже на "бегущее число". Сократи
//     так хотя бы: randNumber
//
//
//     И к отображению вывода - нужно точно выводить в названии, что
//     спрашивается. Сюда же - если решил писать все на англ (что отлично),
//     то делай уже все фразы и выводы на англ.
//
// 4. Объявлять все переменные лучше в одном месте - в начале, чтобы всегда
//     можно было обратиться к ним, а не искать, где они спрятаны в коде.
//     Только началась функция main() и сразу объявляй все переменные.
//
// 5. Данную строчку кода можно короче как-то записать?
//     sum = sum + arr[index];     (у тебя такое в 4 местах)
//
// 6. В задании указано, что размер массива не рандомный, а равен столько -
//     сколько символов в набранном имени.
//     к примеру,
//     const int COUNT =randomNumber(); -> const int COUNT = hello(name);
//
// 7. Как правильней инициализировать было бы тип float?
//         float avarage = 0; ()разве так?)




#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
int randomNumber();


int main()
{
    srand(time(0));
    std::string name="";
    std::cout<<"Enter your name:"<<std::endl;
    std::cin>>name;
    std::cout<<"Hello! "<<name<<",number "<<name.length()<<std::endl;
    std::cout<<std::endl;
    const int COUNT =randomNumber();
    std::cout<<"const:"<<COUNT<<std::endl;
    int arr[COUNT];
    int x = 0;
    for(int index = 0; index<COUNT; index++)
    {
        x=x+1;
        arr[index]=randomNumber();
        std::cout<<x<<")"<<arr[index]<<std::endl;
    }
    float avarage = 0;
    for(int index = 0; index<COUNT; index++){avarage=avarage+arr[index];}
    std::cout<<"среднее арифметическое:"<<avarage/COUNT<<std::endl;



    int sum = 0;
    for (int index = 0; index<COUNT ; index ++)
    {
        sum = sum + arr[index];
    }
    std::cout<<"sum of arrays:"<<sum<<std::endl;
    std::cout<<std::endl;
    int sum2 = 0;
    for (int index = 0; index<COUNT ; index ++)
    {
        if (arr[index]%2==0){sum2 = sum2 + arr[index];}
        else{std::cout<<"";}
    }
    std::cout<<"sum2 of arrays:"<<sum2<<std::endl;


    return 0;
}

int randomNumber()
{
    int ranNumber =(rand()%10);
    return ranNumber;
}
