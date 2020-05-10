/*
1.
___________________________________________
    создать класс               : MyBox
    создать внутри переменную   : width/height/length
    создать внутри функции      :
                                    getData -> cout -> "width = {0} / height = {1} / length = {2}" <-
                                    getVolume -> cout - > "Volume of my box = " <- w*h*l
___________________________________________

2. создать экземпляр класса
3. получить данные
4. вывести объем

*/

#include <iostream>

class MyBox
{
public:
    int m_width;
    int m_height;
    int m_length;

    void getData()
    {
        std::cout << "width = " << m_width << " / height = " << m_height << " / length = " << m_length << std::endl;
    }

    void getVolume()
    {
        std::cout << "Volume of my box = " << m_width * m_height * m_length << std::endl;
    }
};

int main()
{
    MyBox box { 13, 10, 10};
    box.getData();
    box.getVolume();
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// class MyBox {
//     public:
//     int m_weight;
//     int m_length;
//     int m_height;
//     void get_volume(){
//         cout << "Weight= " << m_weight << endl;
//         cout << "Height= " << m_height << endl;
//         cout << "Length= " << m_length << endl;

//     }
//     void get_data()
//     {
//         cout << "Volume = " << m_weight *m_height *m_length << endl;
//     }
// };
// int main(){
//     MyBox box {13 , 10 , 10};
//     box.get_data();
//     box.get_volume();
//     return 0;
// }