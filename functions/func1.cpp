#include<iostream>
using namespace std;
//A simple code to show that how call a function;
int subs(float anum, float bnum)
{
    float d=anum-bnum;        //function for substract;
    return d;           
}
int sum(float a, float b)
{
    float c = a+b;            //Function for addition;
    return c;
}
int main()
{
    float num, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The sum is: "<<sum(num, num2)<<endl;    
    cout<<"The minus is: "<<subs(num, num2);
return 0;
}