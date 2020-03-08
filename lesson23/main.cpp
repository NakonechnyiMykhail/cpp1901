#include <iostream>
#include "struct.hpp"
using namespace std;

string get_name(person man)
{
    return man.name;
}

int main()
{
    person vasiliy;
    vasiliy.name = "Vasiliy";
    vasiliy.age = 21;
    vasiliy.height = 180;
    vasiliy.weigth = 99;
    vasiliy.country = "Russia";
    vasiliy.married = false;
    person ivan = {"Ivan",20,170,80,"Ukraine",true};
    cout << "name = " << ivan.name << endl;

    person people[3];
    people[0] = {"Ivan",20,170,80,"Ukraine",true};
    people[1] = {"Vlad",18,140,40,"Poland",true};
    people[2] = {"Olga",24,120,44,"USA",false};

    for(int i = 0; i < 3; i++)
    {
        cout << "name[" << i << "] = " << people[i].name << endl;
        // cout << "name[" << i << "] = " << get_name(people[i]) << endl;
    }

    cout << get_name(ivan) << endl;
    car cars[2];
    for(int i = 0; i < 2; i++)
    {
        cout << "car model[" << i << "] = ";
        cin >> cars[i].model;
        cout << "car speed[" << i << "] = ";
        cin >> cars[i].speed;
        cout << "car type[" << i << "] = ";
        cin >> cars[i].type;
    }
    for(int i = 0; i < 2; i++)
    {
        cout << cars[i].model << '\t' << cars[i].speed <<
            '\t'<< cars[i].type << endl;
    }

    return 0;
}