#include <iostream>
using namespace std;
//this code is to reversed digit Eg 1234 --> 4321
int main()
{
    int arr[10], wum, reversed = 0;
    cout << "Enter number to reversed: ";
    cin >> wum;    
    while (wum > 0)
    {
        int rem = wum % 10;
        reversed = reversed * 10 + rem;
        wum = wum / 10;
    }
    cout << reversed;
    return 0;
}