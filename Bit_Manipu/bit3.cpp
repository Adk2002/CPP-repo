#include<iostream>
using namespace std;
int clearBit(int n, int pos) //This example for clearBit
{
    int mask = ~(1<<pos); //this tide(~) operator is 1s compliment
    return (n & mask);
}
int main()
{
    cout<<clearBit(5, 2);

}