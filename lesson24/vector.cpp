#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1;
    std::vector<int> vec = {10, 8, 6, 4, 2, 1};
    std::cout << vec[1] << std::endl;
    std::cout << vec.at(2) << std::endl;
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    vec.at(8) = 7;
    std::cout << vec.at(8) << std::endl;
    std::cout << vec.size() << std::endl;

    for (auto const &element : vec)
        std::cout << element << '\t';

    vec.resize(4);
    std::cout << vec.size() << std::endl;
    for (auto const &element : vec)
        std::cout << element << '\t';


    
    return 0;
}