#include <iostream>
using namespace std;
int main()
{
    //for
    for (int index = 0; index < 10; index++)
        cout << index << endl;

    for (int index = 10; index > 0; index--)
        cout << index << endl;

    bool f = false; //=0; true = 1 and more
    // logic AND = &&
    // logic OR  = ||
    // NOT       = !    false => true
                    //  true  => false
    // while
    while(1 && f) {
        cout << "some while" << endl;
    }
    //do-while -> "some while"
    do {
        cout << "some while" << endl;
    } while(1 && f);

    int x = sizeof(int);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << " x ";
        }
        cout << endl;
    }


    return 0;
}