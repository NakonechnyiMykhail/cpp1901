#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    do
    {
        cout << "do-while " << x << endl;
    } while (x < 0);


    while(x < 0)
    {
        cout << x << endl;
        x--;
    }

    // while(x > 0)
    // {
    //     cout << x << endl;
    //     x--;
    // }


    return 0;
}