// #include <iostream>
// #include <typeinfo>
// using namespace std;
// // Напишите программу, которая выводит в консоль имя типа и диапазон его значений.
// int main(){
//     int x = 6;
//     cout << typeid(x).name() << endl;
//     return 0;
// }

#include <iostream>
#include <typeinfo>


template <class T>
constexpr
std::string_view
type_name()
{
    using namespace std;
#ifdef __clang__
    string_view p = __PRETTY_FUNCTION__;
    return string_view(p.data() + 34, p.size() - 34 - 1);
#elif defined(__GNUC__)
    string_view p = __PRETTY_FUNCTION__;
#  if __cplusplus < 201402
    return string_view(p.data() + 36, p.size() - 36 - 1);
#  else
    return string_view(p.data() + 49, p.find(';', 49) - 49);
#  endif
#elif defined(_MSC_VER)
    string_view p = __FUNCSIG__;
    return string_view(p.data() + 84, p.size() - 84 - 7);
#endif
}


int main(int argc, const char * argv[]) {


    const int ci = 0;
    // std::cout << typeid(ci).name() << '\n';

    std::cout << type_name<decltype(ci)>() << '\n';

    // std::cout << INT_MAX <<std::endl;

    return 0;
}




В С++:

#include <limits>
затем используйте

int imin = std::numeric_limits<int>::min(); // minimum value
int imax = std::numeric_limits<int>::max();
std::numeric_limits - тип шаблона, который может быть создан другими типами:

float fmin = std::numeric_limits<float>::min(); // minimum positive value
float fmax = std::numeric_limits<float>::max();

или через функции










#include <iostream>
#include <limits>

using namespace std;

template<typename T>
void showMinMax() {
   cout << "min: " << numeric_limits<T>::min() << endl;
   cout << "max: " << numeric_limits<T>::max() << endl;
   cout << endl;
}

int main() {

   cout << "short:" << endl;
   showMinMax<short>();
   cout << "int:" << endl;
   showMinMax<int>();
   cout << "long:" << endl;
   showMinMax<long>();
   cout << "float:" << endl;
   showMinMax<float>();
   cout << "double:" << endl;
   showMinMax<double>();
   cout << "long double:" << endl;
   showMinMax<long double>();
   cout << "unsigned short:" << endl;
   showMinMax<unsigned short>();
   cout << "unsigned int:" << endl;
   showMinMax<unsigned int>();
   cout << "unsigned long:" << endl;
   showMinMax<unsigned long>();
}


