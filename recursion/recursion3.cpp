#include<iostream>
using namespace std;
int infinite(int a = 0)
{
    cout<<" "<<a;
    return infinite(a=a+1);
}
int main()
{
    int a = 0;
    cout<<infinite(a);
    
return 0;
}