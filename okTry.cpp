#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
float cosnum(float);
const float pi=3.4563;        //This motherfucker is a constant and global Variable;
int snum;
int main()
{
  float num;                   //and this is a local Variable;
  cout<<"Enter the float number: ";
  cin>>num;
  cout<<"Enter the degree of cos: ";
  cin>>snum;
  cout.setf(ios::fixed);              //This is an ios flag to be set before the setprecision;
  cout<<setprecision(10)<<"\nThe radian is: "<<cosnum(num);         //setprecision is found in iomanip header file;
  return 0;
}
float cosnum(float dnum)
{
  return dnum*cos(snum)*pi;
}
