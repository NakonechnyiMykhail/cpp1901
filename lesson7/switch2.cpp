#include <iostream>
using namespace std;
int main()
{
    int day = 0;
    do
    {
        cout << "Enter day: ";
        cin >> day;
    } while (day <= 0 || day > 7);

    switch(day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Work \n";
            break;
        case 6:
        case 7:
            cout << "Weekend \n";
            break;
    }
    return 0;
}