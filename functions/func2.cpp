#include<iostream>
using namespace std;
//Function protypes
int sum(float a, float b);
void g(void); //This bitch means that it does not give or take anything;
int main()
{
    float num, num2;
    cout<<"Enter the first number: ";
    cin>>num;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The value of the two number is: "<<sum(num,num2);
    g();
return 0;
}
int sum(float a, float b)
{
    float c=a+b;
    return c;
}
void g()
{
    cout<<"\nHello does it works.";
}