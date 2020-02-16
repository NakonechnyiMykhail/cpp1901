#include <cstdlib>
#include <ctime>

int function(int nameLength)
{
    srand(time(0));
    int numbering = 0;
    float avarage = 0;
    int fullSumm = 0;
    int fullSumNumber2 = 0;

    const int COUNT = nameLength;
    int arr[COUNT];

    for(int index = 0; index < COUNT; index++)
    {
        numbering = numbering+1;
        arr[index] = randomNumber();
        std::cout << numbering << ")" << arr[index] << std::endl;
    }

    for(int index = 0; index < COUNT; index ++){avarage += arr[index];}
    std::cout<<"avarage:"<<avarage/COUNT<<std::endl;

/////////////////////Сумма
    for (int index = 0; index < COUNT ; index ++){fullSumm += arr[index];}
    std::cout << "sum of arrays:" << fullSumm << std::endl;
    std::cout << std::endl;
////////////////////////Сумма чисел кратных двум
    for (int index = 0; index < COUNT ; index ++)
    {
        if (arr[index] % 2 == 0){fullSumNumber2 += arr[index];}
        else{std::cout<<"";}
    }
    std::cout << "sum2 of arrays:" << fullSumNumber2 << std::endl;


    return 0;
}