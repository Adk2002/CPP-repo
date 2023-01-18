/**********************************
using of contructor in class
***********************************/
#include<iostream>
using namespace std;
class complex
{
  int a, b;
public:
    //creating a contructor
    /*contrtuctor is a special member function with same as
    of the class.
    it is automatically invoked/called whenever a object is created;
    It is used to initialixing of its class.
    */

    complex(void);//contructor declaration;

    void printNumber()
    {
      cout<<"Your number is: "<< a <<" + "<< b <<"i"<<endl;
    }

};
complex::complex(void) /*-->It is a default contructor as it
doesnot takes any parameters*/
{
  a = 10;
  b = 20;

}

int main()
{
  complex c1;
  c1.printNumber();
  return 0;
}
//characterstics of constructor
/*It should be declared in the public section of the class
2. They are aitomatically invoked whenever the object is created
3.They cannot returns values and do not have return types
4.It can have default arguments
5.we cannot refer to their address
*/
