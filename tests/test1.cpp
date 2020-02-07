#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int count = 0, repeats = 0;
    cout << "count of lines: ";
    cin>> count;

    cout << "number of repeat: ";
    cin >> repeats;

    for(int i = 1; i <= count; i++){
        for(int j = 1; j <= i; j++){
            cout << " ";
        }
        for(int u = 0; u < repeats; u++){
            cout << "1 ";
        }
        cout << endl;
    }
    return 0;
}