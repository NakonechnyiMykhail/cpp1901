#include <iostream>
using namespace std;
int main()
{
    int age = 0;

    do
    {
        cout << "Enter your age: ";
        cin >> age;
    } while (age <= 0 || age > 150);


    if (age > 0 && age < 3)
    {
        cout << "babby \n";
    }
    else if (age >= 3 && age < 18)
    {
        cout << "young \n";
    }
    else if (age >= 18 && age < 60)
    {
        cout << "middle \n";
    }
    else
    {
        cout << "old \n";
    }


    return 0;
}