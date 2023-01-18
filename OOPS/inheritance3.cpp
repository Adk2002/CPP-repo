#include <iostream>
using namespace std;
// More about multilevel class
class student //base class
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void show_roll_no(void);
};

void student ::set_roll_no(int r)
{
    roll_no = r;
}
void student ::show_roll_no()
{
    cout << "The roll number is " << roll_no << endl;
}

class exam : public student //first level
{
protected:
    float Computer;
    float Maths;
    float English;

public:
    void get_marks(float, float, float);
    void show_marks(void);
};
void exam ::get_marks(float m1, float m2, float m3)
{
    Maths = m1;
    Computer = m2;
    English = m3;
}
void exam ::show_marks()
{
    cout << "Your Maths marks is: " << Maths << endl;
    cout << "Your Computer marks is: " << Computer << endl;
    cout << "Your English marks is: " << English << endl;
}
class Result : public exam //second level
{
public:
    void display()
    {
        show_roll_no();
        show_marks();
        cout << "your Result is " << (Maths + Computer + English) / 3;
    }
};
int main()
{
    Result aditya;
    aditya.set_roll_no(47);
    aditya.get_marks(85.2, 95.5, 92.0);
    aditya.display();
    return 0;
}