#include<iostream>
using namespace std;
int number(int q)       //Resursion function to print 1 to 'n' backwards;
{
    if(q == 0)
        return 0;
    else 
        cout<<" "<<q;
        return number(q-1);
}
int main()
{
    int a;
    cout<<"Enter any number: ";
    cin>>a;
    cout<<number(a);
return 0;
}