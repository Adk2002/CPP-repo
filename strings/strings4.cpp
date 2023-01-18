#include<iostream>
using namespace std;
//adding of two strings
string words(string s1, string s2);
int main()
{
    string s1, s2;
    cout<<"String 1: ";
    cin>>s1;
    cout<<"String 2: ";
    cin>>s2;

    cout<<words(s1, s2)<<endl;
return 0;
}
string words(string s1, string s2)
{
    return {s1+s2};
    
}