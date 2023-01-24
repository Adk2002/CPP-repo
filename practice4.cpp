#include <iostream>
using namespace std; //finding the GCD using Euclid's method
int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    int a = 42, b = 24; 
    cout << gcd(a, b);
    return 0;
}