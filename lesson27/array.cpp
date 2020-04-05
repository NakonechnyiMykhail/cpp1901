#include <iostream>
using namespace std;
int main()
{
    int i = 0, n = 0;
    int * p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new (std::nothrow) int[i];
    if(p == nullptr) // if (!p)
        cout << "Error: memory couldn't be allocated";
    else
    {
        for (n = 0; n < i; n++)
        {
            // cout << "Enter " << (n+1) << " number of " << i << ": ";
            // cin >> p[n];
            p[n] = (rand() % 10)+1;
        }
        cout << "You have entered: ";
        for (n = 0; n < i; n++)
            cout << p[n] << ", ";
        cout << endl;
        delete[] p;
    }
    return 0;
}

// std::unique_ptr<int[]> array(new int[size]); // c++11
// auto array = std::make_unique<int[]>(size);  // c++14