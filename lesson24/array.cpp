#include <iostream>
#include <array> // c++11
#include <algorithm> // std::sort

void printLength(const std::array<auto,5> &myArray)
{
    std::cout << "Array length = " << myArray.size() << std::endl;
}

int main()
{
    // auto n;
    // std::cin >> n;
    int number {4};
    const int COUNT (5);
    std::cout << number << '\n';
    std::cout << COUNT << '\n';
    //previous standart 'old' array
    // data_type array_name[COUNT];
    // std::array<int, n> arr2; //объявление
    std::array<double, COUNT> arr3 {1,2,3,4,5}; //объявление и uniform инициализация данных
    std::array<int, 5> arr = {6,2,23,14,55}; //объявление и инициализация данных
    // 2D
    // std::array<int,<int,3>3> arr2d;// = {{1,2,3},{4,5,6},{7,8,9}};
    for (const auto &element : arr)
        std::cout << element << ' ';

    std::cout << std::endl;
    arr[0] = 78;
    arr.at(2) = 10;
    for (const auto &element : arr)
        std::cout << element << ' ';

    std::sort(arr.begin(), arr.end());
    std::cout << std::endl;
    for (const auto &element : arr)
        std::cout << element << ' ';

    std::cout << arr.at(0) << std::endl;
    std::cout << arr.size() << std::endl;

    std::sort(arr.rbegin(), arr.rend());
    std::cout << std::endl;
    for (const auto &element : arr)
        std::cout << element << ' ';



    std::cout << std::endl;

    printLength(arr);

    return 0;
}