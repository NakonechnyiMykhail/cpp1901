#ifndef STRUCT_HPP
#define STRUCT_HPP
#include <cstring>
#include<vector>
using namespace std;


enum Children {
 ZERO,
 ONE,
 TWO,
 TREE,
 FOUR,
 };

typedef struct {
    int day;
    int month;
    int year;
} date;
typedef struct {
    string post;
} e_mail;

typedef struct {
    int home_number;
    string street;
    int flat_number;
    int post_index;
    string city;
    string country;
} adress;
typedef struct {
int amounte;
char valute;
} money;
typedef struct {
    int value;
    int persent;
} credit;


typedef struct
{ string name;
 string surname;
 string petronimik;
 int age;
 date date_of_birth;
 e_mail mail;
 vector<string> property;
 bool married;
 int child;
 adress c_address;
 money c_money;
 credit c_credit;
 double cred;
}data_bank;

#endif