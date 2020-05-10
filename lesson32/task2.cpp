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

// private
    int m_width = 10;
    int m_height = 10;
    int m_length = 10;

public:
    int m_a = 10;

    void setData(int width, int height, int length)
    {
        m_width = width;
        m_height = height;
        m_length = length;
    }

    void getData()
    {
        std::cout << "width = " << m_width << " / height = " << m_height << " / length = " << m_length << std::endl;
    }

    void getVolume()
    {
        std::cout << "Volume of my box = " << m_width * m_height * m_length << std::endl;
    }

    void copyFrom(const MyBox &b)
    {
        m_width = b.m_width;
        m_height = b.m_height;
        m_length = b.m_length;
    }

};

int main()
{
    MyBox box;
    box.setData(5, 5, 5);
    // box.getData();
    // box.getVolume();
    // public
    // std::cout << "a = " << box.m_a << std::endl;

    // private
    // std::cout << "width = " << box.m_width << std::endl;

    MyBox box2;
    box2.copyFrom(box);
    box2.getData();
    return 0;
}
