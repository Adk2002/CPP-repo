#include<iostream>
using namespace std;
int setBit(int n, int pos)//This example is for setbit 
{
    return (n | (1<<pos)); //This is or '|' operator is used of setbit
}
int main()
{
    cout<<setBit(5,1);
     
return 0;
}