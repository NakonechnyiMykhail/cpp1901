#include <iostream>
using namespace std;
int returnInt(){
    return 8;
    cout << "after return Int" << endl;
}

int main(void) {
    cout << "start main()" << endl;
    //v1
    // int a = 8;
    // returnInt();
    // cout << returnInt() << endl;
    // cout << returnInt() + 2 << endl;

    //v2
    int x = returnInt();
    cout << x << endl;
    cout << "end main()" << endl;

    return 0;
    cout << "after return" << endl;
}