// Gleb's question
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int count = 0, repeats = 0;
    char phrase[20];

    cout << "enter a phrase: ";
    // cin.getline(phrase, 20); //v1
    cin.get(phrase, 20).get();  //v2

    cout << "count of lines: ";
    cin>> count;

    cout << "number of repeat: ";
    cin >> repeats;



    for(int i = 1; i <= count; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int u = 0; u < repeats; u++){
            cout << phrase;
        }
        cout << endl;
    }
    return 0;
}