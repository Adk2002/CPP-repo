#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    
    char num;
    cout<<"Press any key:";
    cin>>num;
    if (isalpha(num)>0)
    cout<<"The user has enterend alphabet.";
    if (isdigit(num)>0)
    cout<<"The user has entered number.";
    if (ispunct(num)>0)
    cout<<"The user has entered a puncuation.";
    if (isspace(num>0))
    cout<<"The user has entered space.";
    return 0;
}