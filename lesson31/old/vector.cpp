#include <iostream>
#include <vector>

int main()
{
    // std::string s {"hello"};
    std::vector<int> data {1, 3, 5, 5, 6, 9};

    for (auto const &element: data)
    {
        std::cout << element << std::endl;
    }
    data.pushback(2);

    return 0;
}