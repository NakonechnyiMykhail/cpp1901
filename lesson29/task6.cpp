#include <iostream>

// For task 6
int recnum(int n, int i) {
    return (n == 0) ? i : recnum( n/10, i*10 + n%10);
}


int main()
{
    // std::cout << recnum(123, 0) << std::endl;
    std::cout << recnum(1258, 0) << std::endl;
    return 0;
}