#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int multiply(int c=1, int d=5){
    return c*d;
}
int main(void){
    // cout << 3+7 << endl;
    // cout << add(3,7) << endl;

    cout << multiply(3,7) << endl;//v1
    cout << multiply(3) << endl;//v2
    cout << multiply() << endl;//v3
    return 0;
}