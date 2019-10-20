#include <iostream>

using namespace std;

int main(){

    int x = 10, y = 12, z = 3;
    x+=y-x++*z;
    cout << x << endl; // -7
    z=--x-y*5;
    cout << z << endl; //-51
    y/=x+5%z;
    cout << y << endl; // 1
    z=x++ +y*5;
    cout << z << endl;//70
    x=y-x++*z;
    cout << x << endl;//-18

    return 0;
}