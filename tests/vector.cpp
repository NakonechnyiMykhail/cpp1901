#include <vector>
#include <iostream>

int main()
{
    // Нет необходимости указывать длину при инициализации
    // std::vector<int> array;
    // std::vector<int> array2 = { 10, 8, 6, 4, 2, 1 }; // используется список инициализаторов для инициализации массива
    // std::vector<int> array3 { 10, 8, 6, 4, 2, 1 }; // используется uniform инициализация для инициализации массива (начиная с C++11)

    std::vector<int> array { 0, 1, 4, 7, 9, 11 };
    array.resize(4); // изменяем длину array на 4

    std::cout << "\nThe length is: " << array.size() << '\n';

    for (auto const &element: array)
        std::cout << element << ' ';



    // array[7] = 3; // без проверки диапазона
    // array.at(8) = 4; // с проверкой диапазона

    // array = { 0, 2, 4, 5, 7 }; // хорошо, длина array теперь 5
    // array = { 11, 9, 5 }; // хорошо, длина array теперь 3
    return 0;
}