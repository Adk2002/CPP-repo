#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(4, 6);
    c1.printNumber();

    complex c2(4);
    c2.printNumber();

    complex c3(0);
    c3.printNumber();
    return 0;
}