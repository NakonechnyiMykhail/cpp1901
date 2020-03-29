adress addAdress()
{
    adress addr;
    std::cout<<"Enter the number of house: ";
    std::cin>>addr.house_number;

    std::cout<<"Enter the number of flat: ";
    std::cin>>addr.flat_number;

    return addr;
}

void addClient(std::vector<auto> &myVec)
{
    customer tmp;
    std::cout<<"Enter the surname: ";
    std::cin>>tmp.surname;

    std::cout<<"Enter the name: ";
    std::cin>>tmp.name;

    std::cout<<"Enter the age: ";
    std::cin>>tmp.age;

    tmp.c_address = addAdress();

    myVec.push_back(tmp);

}

typedef struct
{
    int day;
    int month;
    int year;
} date;

std::vector <std::string> property;



    enum Children
    {
        CHILDREN_ZERO,
        CHILDREN_ONE,
        CHILDREN_TWO,
        CHILDREN_THREE,
        CHILDREN_FOUR,
        CHILDREN_FIVE,
    };

    typedef struct
    {
        int hous_number;
        std::string street;
        int flat_number;
        int post_index;
        std::string city;
        std::string country;
    } workplace;

    typedef struct
    {
        int count;
        int corrency;
    } profit;

    typedef struct
    {
        int count;
        int percent;
    } credit_amount;


typedef struct
{
    std::string surname;
    std::string name;
    std::string second_name;
    int age;
    email mail;
    date c_date;
    bool married;

} client;

void menu_template()
{
    std::cout << "Menu:\n";
    std::cout << "\t1. Print client\n";
    std::cout << "\t2. Add client\n";
    std::cout << "\t\t - Edit client\n";
    std::cout << "\t\t - Add client\n";
    std::cout << "\t\t - Remove client\n";
    std::cout << "\t3. Client info\n";


}
void menu()
{
    int number = 0;
    std::cout << "Hello, friend.  " << std::endl;
    menu_template();
    std::cout << "Enter the number of your choise: ";
    std::cin >> number;
    switch(number)
    {
        case 1:
            print_client();
            break;
        case 2:
            std::cout << "1 - Edit client\n";
            std::cout << "2 - Add client\n";
            std::cout << "3 - Remove client\n";
            cin >> number2;
            if(number2 == 1) {
                edit_client();
            }
            if(number2 == 2) add_client();
            if(number2 == 3) remove_client();

            break;
        default:
            menu_template();
    }

}