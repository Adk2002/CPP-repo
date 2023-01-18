

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int num;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
    void size(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++) // in string their is a function which is length()
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            textbackground(RED);
            textcolor(WHITE);
            printf("Incorrect binary format\n");
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
}

void binary::size(void)
{
    do
    {
        /* code */
        cout << " size: "<<s.at(num);
        num++;

    } while (num < s.size());
}

void binary::display(void)
{

    cout << " Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    b.size();
   
    return 0;
}
