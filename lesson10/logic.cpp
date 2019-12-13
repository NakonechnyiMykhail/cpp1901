#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 1, b = 0, c = 1, d = 0;
    cout <<boolalpha << (a!=b || !b && false || c<d && a==b) << endl;


    return 0;
}