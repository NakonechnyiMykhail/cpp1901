#include <iostream>
#include <vector>
int main()
{
    const int n_students = 7;
    int scores[n_students] = {44, 22,54,23,67,99,29};

    // for (int student = 0; student < n_students; ++student)
    //     std::cout << "Score: " << scores[student] << '\n';

    for(const auto &number : scores)
        std::cout << "Score: " << number << '\n';

    std::vector<int> math = {44, 22,54,23,67,99,29};
    for(const auto &number : math)
        std::cout << "Score: " << number << '\n';
    return 0;
}