#include <iostream>

using namespace std;
// Создайте константу с именем pi (число π) и переменную r – радиус.
// Используя формулу πr2, вычислите площадь круга и выведите результат на экран.

int main(){
    const double pi = 3.14;
    double r = 5.6;
    cout << pi * r * r << endl;

    return 0;
}