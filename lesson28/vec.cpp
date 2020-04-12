#include <iostream>
#include <vector>

void printStack(const std::vector<auto> &stack)
{
    for (auto const &element: stack)
        std::cout << element << ' ';
    std::cout << "(cap: " << stack.capacity() << '\t' << "len: "<< stack.size() << ")\n";

}

int main()
{
    // int *array = new int[12] {1, 2, 3, 4, 5};

    std::vector<int> vec {3, 4, 7, 8, 9, 20, 11, 23, 23};
    // vec.resize(6);


    // std::cout << "The length is: " << vec.size() << '\n';
    // std::cout << "The capacity is: " << vec.capacity() << '\n';
    printStack(vec);
    vec = {1, 2, 3, 4};
    // vec.resize(2); //size
    vec.reserve(11); // capacity
    // std::cout << "The length is: " << vec.size() << '\n';
    // std::cout << "The capacity is: " << vec.capacity() << '\n';
    printStack(vec);

    // for (auto const &element: vec)
    //     std::cout << element << ' ';
    // std::cout << '\n';

    vec.push_back(6);

    printStack(vec);


    std::cout << vec.back() << '\n';
    vec.pop_back();

    printStack(vec);
    // for (auto const &element: vec)
    //     std::cout << element << ' ';
    // std::cout << '\n';

    return 0;
}