#include <iostream>
using namespace std;
// More about Multiple inheritance
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
class Derived : public base1, public base2
{
public:
    void show()
    {
        cout<<"The value of base1: "<<base1int<<endl;
        cout<<"The value of base2: "<<base2int<<endl;
        cout<<"The total is: "<<base1int * base2int<<endl;
    }
};
int main()
{
    Derived aditya;
    aditya.set_base1int(455);
    aditya.set_base2int(56);
    aditya.show();
    return 0;
}