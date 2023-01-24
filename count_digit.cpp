#include <iostream>
using namespace std;
int check(int N)
{
    int temp = N;
    int count = 0;
    while (temp > 0)
    {
        // Extracting last digit of number
        int last = temp % 10;
        // Checking last digit is divisible by N
        if (last > 0 && N % last == 0)
        {
            count++;
        }
        // Upgrading given number for extracting next digit
        temp = temp / 10;
    }
 
    return count;
}
int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    cout<<check(n);

    return 0;
}