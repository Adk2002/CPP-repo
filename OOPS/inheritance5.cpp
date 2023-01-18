// Ambiguity Resolution
#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you?";
    }
};
class base2
{
public:
    void greet()
    {
        cout << "\nWhat's the weather today? ";
    }
};
class derived : public base1, public base2
{
    int a;

public: // to resolve the ambiguity
    void say()
    {
        base1::greet(); //<----
    }
};

//Ambiguity 2 class
class b
{
public:
    void qqqq()
    {
        cout << "Hello how are you? ";
    }
};
class q
{
public:
    void qqq()
    {
        cout<< "fuck you!!";
    }
};
int main()
{
    // Ambiguty 1
    //  base1 a;
    //  base2 q;
    //  a.greet();
    //  q.greet();

    // //Hence it will be an ambigious
    // derived w;
    // w.say();

    // Ambiguity 2
    b a;
    a.qqqq();
    q t;
    t.qqq();

    return 0;
}