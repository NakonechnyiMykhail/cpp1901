#include <iostream>
#include "circle.hpp"
#include "values.hpp"
#include "employee.hpp"
#include "something.hpp"

int main()
{
//    task ===========================================================================
//    Circle def;
//    def.print(); // color: red, radius: 20

//    Circle black("black");
//    black.print(); // color: black, radius: 20

//    Circle thirty(30.0);
//    thirty.print(); // color: red, radius: 30

//    Circle blackThirty("black", 30.0);
//    blackThirty.print(); // color: black, radius: 30
// ===========================================================================

//    int a = 2;
//    int b(3);
//    int c{6};
//    Values val;
//    val.print();
//    Values val2(10,10,10);
//    val2.print();

//    Values value(5.8);
//    value.print();

//    Employee em1;
//    Employee em2("Ivan");

    Something obj(1);
    std::cout << obj.getID() << '\n';

    Something *pObj = new Something(2);
    std::cout << pObj->getID() << '\n';
    delete pObj;

    return 0;
}
