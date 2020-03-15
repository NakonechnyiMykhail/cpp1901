#include <iostream>
#include <array>
#include <algorithm> // для std::sort

void printLength(const std::array<double, 4> &myarray)
{
    std::cout << "\nlength: " << myarray.size();
}

int main()
{
    //don't work
    // int n = 0; // need to be a const
    // std::cin >> n;
    // std::array<int,n> arr;
    // for (const auto &element : arr)
    //     element = element;


    std::array<double, 4> myarray { 8.0, 6.4, 4.3, 1.9 };

    printLength(myarray);

    std::sort(myarray.begin(), myarray.end()); // сортировка массива по возрастанию
//    std::sort(myarray.rbegin(), myarray.rend()); // сортировка массива по убыванию

    for (const auto &element : myarray)
        std::cout << element << ' ';


    return 0;
}