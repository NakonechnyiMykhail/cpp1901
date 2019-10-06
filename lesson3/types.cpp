#include <iostream>
using namespace std;
int main() {
    int x = 3;
    int y = 5;
    cout << x + y << endl;

    string a = "My ";
    string b = "name";
    cout << a + b << endl;
    cout << a << b << "text" << endl;

    bool t = 0; //t -> true
    bool f = 0; //f -> false
    bool ft = true;

    bool ft1 = bool(y);
    bool ft2 = x;

    cin >> f;
    cin >> t;

    cout << boolalpha << ft1 << " " << ft2 << endl;
    cout << noboolalpha << f << " " << t << endl;
    return 0;
}