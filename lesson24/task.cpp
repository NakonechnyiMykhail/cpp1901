#include <iostream>
#include <vector>

void summElements(const std::vector<auto> &myVector)
{
    auto summ = 0;
    for (auto const &element : myVector)
        summ += element;
    std::cout << "Summ of vector = " << summ << std::endl;
}


auto summElements2(const std::vector<auto> &myVector)
{
    auto summ = 0;
    for (auto const &element : myVector)
        summ += element;
    return summ;
}

void printLength(const std::vector<auto> &myVector)
{
    std::cout << "Array length = " << myVector.size() << std::endl;
}
void addElementToVector(std::vector<auto> &myVector)
{
    auto tmp = 0;
    std::cout << "Enter number to add at vector: ";
    std::cin >> tmp;
    myVector.push_back(tmp);
}

int main()
{
    std::vector<int> vec;

    for(auto index = 0; index < 10; index++)
        vec.push_back(index*3);

    for (auto const &element : vec)
        std::cout << element << ' ';

    std::cout << std::endl;
    printLength(vec);

    summElements(vec);
    std::cout << "Summ (2) of vector = " << summElements2(vec) << std::endl;



    addElementToVector(vec);
    for (auto const &element : vec)
        std::cout << element << ' ';
    std::cout << std::endl;

    for(int i=0; i< 5; i++)
        addElementToVector(vec);

    for (auto const &element : vec)
        std::cout << element << ' ';
    std::cout << std::endl;
    return 0;
}