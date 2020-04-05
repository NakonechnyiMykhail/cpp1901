#include<iostream>
#include<vector>
#include"struct.hpp"
using namespace std;

void addClient(vector<auto>&vec);
void print(vector<auto>&vec, int count);
void choice(vector<auto>&vec);
void print_menu();
int main() {
    data_bank person;

    cout<<"Enter your value of credit: ";
    cin>>person.c_credit.value;

    cout<<"Enter your precent of credit: ";
    cin>>person.c_credit.persent;

    person.cred=(person.c_credit.value+person.c_credit.value*person.c_credit.persent)/12;
    cout<<"You need topay each month: "<<person.cred<<endl;
    vector<data_bank>clients;


    choice(clients);
    return 0;
}
 void addClient(vector<auto>&vec)
 {
    data_bank new_person;
    cout<<"Enter the name: ";
    cin>>new_person.name;
  cout<<"Enter the surname: ";
  cin>>new_person.surname;
  cout<<"Enter the petronimik: ";
  cin>>new_person.petronimik;
  cout<<"Enter the age: ";
  cin>>new_person.age;
  cout<<"Enter the date of birth: "<<endl;
  new_person.date_of_birth.day = 2;
  new_person.date_of_birth.month = 3;
  new_person.date_of_birth.year = 2020;
//   cin>>new_person.date_of_birth.year;
//   cout<<"Enter the email: "<<endl;
//   cin>>new_person.mail.post;
  cout<<"Enter your status: ";
  cin>>new_person.married;

  vec.push_back(new_person);
 }
void print(vector<auto>&vec, int count)
{
 cout<<"data about client: "<<endl;
 cout<<vec[count].name<<endl;
 cout<<vec[count].surname<<endl;
 cout<<vec[count].age<<endl;
 cout<<vec[count].date_of_birth.day << "." << vec[count].date_of_birth.month <<endl;
 cout<<vec[count].married<<endl;
}

void print_menu()
{
    cout<<"menu:"<<endl;
    cout<<"1. Add the client"<<endl;
    cout<<"2. Print infor about client"<<endl;
}

void choice(vector<auto>&vec) {
    int choice=0;
    int count = 0;
    // cout << "Enter count: ";
    // cin >> count;
    print_menu();

    cout<<"Enter number of your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            addClient(vec);
            break;
        case 2:
            print(vec, count);
            break;
        default:
            print_menu();
    }


}