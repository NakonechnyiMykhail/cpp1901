#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int number = 10;
    char surname[20];
    char name1[number] = {'V','l','a','d'};
    char name2[number] = {'V','l','a','d','\0'};
    char name3[] = "Vlad";
    // cout << strlen(name1) << endl;
    // cout << strlen(name2) << endl;
    // cout << strlen(name3) << endl;
    // cout << name1 << endl;
    // cout << name2 << endl;
    // cout << name3 << endl;
    // cout << name3[2] << endl;

    // for(int i = 0; i < number; i++) //v1
    // for(int i = 0; i < strlen(name2); i++)//v2
    for(int i = 0; i < sizeof(name2); i++)//v3
        cout << name2[i] << endl;


    return 0;
}