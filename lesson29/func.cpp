#include <iostream>

void countOut(int count)
{
    std::cout << "push: " << count << '\n';

    if (count > 1)
        countOut(count-1);

    std::cout << "pop: " << count << '\n';
}

int main()
{
    countOut(4);

    return 0;
}