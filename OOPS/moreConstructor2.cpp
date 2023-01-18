/**********************************
Parameters and default constructors
***********************************/
#include<iostream>
using namespace std;
class complex
{
  int a, b;
public:

    complex(int, int);//contructor declaration;

    void printNumber()
    {
      cout<<"Your number is: "<< a <<" + "<< b <<"i"<<endl;
    }

};
complex :: complex(int x,int y) //-->This is parameterised contructor cuz it takes 2 parameters;
{
  a = x;
  b = y;
  cout<<"fuck this world"<<endl;
}
int main()
{
  //Implicit call
  complex a(4, 6);

  //Explicit call;
  complex b = complex(5, 7);
  a.printNumber();
  b.printNumber();
  return 0;
}
