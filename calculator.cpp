#include<iostream>
#include<cmath>
using namespace std;
const int pi=3.14;
int main()
// {
  // int expo;
  // float base, result=1;
  // cout<<"enter Base number:";
  // cin>>base;
  // cout<<"Enter exponent number:";
  // cin>>expo;

  // cout<<base<<"^"<<expo<<"=";

  // while(expo !=0)   /*this thing calculate exponent and base number*/
  // {
  //   result *= base;
  //   --expo;
  // }
  // cout<<result;
  // return 0;
// }
{
    float area, rad, len, bre, a, b, c, s;
    int ch;
    cout<<"1.circle"<<endl;
    cout<<"2.rectangle"<<endl;
    cout<<"3.triangle"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"Enter the radius: ";
        cin>>rad;
        area=pi*rad*rad;
        cout<<"\nThe radius of the circle is: "<<area;
        break;

        case 2: cout<<"Enter length and breath: ";
        cin>>len;
        cout<<"\nEnter the breath: ";
        cin>>bre;
        area=len*bre;
        cout<<"\nThe area of the rectangle is: "<<area;
        break;

        case 3: cout<<"Enter three sides of a triangle: ";
        cin>>a>>b>>c;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"\nThe area of the triangle is: "<<area;
        break;

        case 4:
        cout<<"\nYour choice is not with in the option";
    }
    
return 0;
}
