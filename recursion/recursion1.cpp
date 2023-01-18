#include<iostream>
using namespace std;
/*Recursive way to print factorial */
long Fact(long n) 
{
    if(n == 1 || n == 0)      //Base case: factorial of 0 or 1 is 1
        return 1;
    else            //Recursive case: multiply 'n' by (n - 1) factorial
        return n * Fact(n-1);
}
int main()
{
    long n;
    cin>>n;
    cout<<Fact(n);
return 0;
}