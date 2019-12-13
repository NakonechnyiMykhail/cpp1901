#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int number = 10;
    int arr[number];
    // cout << sizeof(arr) << endl;
    int count = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < count; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }

    return 0;
}