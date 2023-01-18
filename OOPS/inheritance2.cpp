#include <iostream>
using namespace std;
// single inhertance
// base class

class base
{
    int data1; // by default private and is not inheritable

public:
    int data2;

    void set_data();
    int get_data();
    int get_data2();
};

void base ::set_data(void)
{
    data1 = 100;
    data2 = 200;
}

int base ::get_data()
{

    return data2;
}
int base :: get_data2()
{
    return data1;
}
// derived class
class derived : public base /*class is being derived
                             publically*/
{
    int data3;

public:
    void process();
    void display();
};
void derived :: process()
{
    data3 = get_data2() * get_data();
}

void derived :: display()
{
    cout<<"Value od data1 is "<<get_data2()<<endl;
	cout<<"Value od data2 is "<<data2<<endl;
	cout<<"Value od data3 is "<<data3<<endl;
}
int main()
{
    derived der;
    der.set_data();
    der.process();
    der.display();

    return 0;
}