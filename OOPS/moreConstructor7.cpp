// using of destructor
#include <iostream>
using namespace std;
// Destructor never takes an argument nor does it return value
int count = 10;
class num
{
public:
    num()
    {
        count++;
        cout << "This is atime when constructor is called for object number "<<count<<endl;
    }
    ~num() //destructor
    {
        cout<<"This is the time when my destructor is called for object number."<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"we are inside our main function."<<endl;
    cout<<"Creating two objects n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}