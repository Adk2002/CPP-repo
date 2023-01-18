#include<iostream>
using namespace std;
int main()
{
    int qum, reminder, sum = 0, original;
    cout<<"\nEnter the palindrome number: ";
    cin>>qum;
    original = qum;
    while(qum > 0)
    {
        reminder = qum %10;
        sum = reminder + (sum *10);
        qum = qum / 10;
    }
    if(original == sum)
        cout<<"Yes";
    else
        cout<<"No";
return 0;
}