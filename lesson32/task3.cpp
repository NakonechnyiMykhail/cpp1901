#include <iostream>

class IntArray
{
private:
    int m_array[10];
public:
    void setValue(int index, int value)
    {
        if (index < 0 || index >=10)
            return;

        m_array[index]=value;
    }

};

// IntArray array;
// array.m_array[16] = 2;

class Values
{
private:
    // int m_number1;
    // int m_number2;
    // int m_number3;
    int m_number[3];
public:
    // void setNumber1(int number) { m_number1 = number; }
    // int getNumber1(){ return m_number1; }
    void setNumber1(int number) { m_number[0] = number; }
    int getNumber1(){ return m_number[0]; }
};

int main()
{
    Values value;
    value.setNumber1(5);
    std::cout << value.getNumber1() << std::endl;

    return 0;
}