/// using of copy constructor
#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() { a = 100; }
    Number(int num) { a = num; }

    /*When no copy constructor is found, 
    then compiler supplies its own copy constructor*/
    Number(Number &num)
    {
        cout << "Copy constructor called" << endl;
        a = num.a;
    }

    void display() { cout << " The number for this object is " << a << endl; }
};
int main()
{
    Number x, y(69), z(78);
    x.display();
    y.display();
    z.display();
    Number z1(x); //copy constructor invoked

    Number z3 = z1;
    z1.display(); // copy constructor

    z3.display();
    return 0;
}