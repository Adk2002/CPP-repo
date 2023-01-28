#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0, remainder, originalNum, number;
    cout << "\nEnter number: ";
    cin >> number;
    originalNum = number;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        sum += pow(remainder, 3);
        originalNum /= 10;
    }
    if (sum == number)
        cout << "\nIt is armstrong number.";
    else
        cout << "\nIt is not";

    return 0;
}