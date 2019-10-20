#include <iostream>
using namespace std;
int getValueFromUser(){
    cout << "Enter an Integer: ";
    int x = 0;
    cin >> x;
    return x;
}
int main(void) {
    int a = getValueFromUser();
    int b = getValueFromUser();

    cout << "a+b = " << a+b << endl;
    return 0;
}