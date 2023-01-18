#include <iostream>
using namespace std;
// base class
class Employee
{

    char name[30];

public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 450000;
    }
    Employee(){};
};
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
1. Default visibility mode is private
2. private visibility mode: public members of the base class becomes
private members of the derived class
*/
class programmer : Employee
{
public:
    programmer(int okid)
    {
        id = okid;
    }
    int languagecode = 1;
    void getdata()
    {
        cout<<id<<endl;
    }
};
int main()
{
    Employee aditya(1), harry(2);
    cout << aditya.salary << endl;
    cout << harry.salary << endl;

    programmer rohil(100);
    cout << rohil.languagecode;
    rohil.getdata();
    return 0;
}