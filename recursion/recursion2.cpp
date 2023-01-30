#include <iostream>
using namespace std;
int number(int q)
{
    // Resursion function to print 1 to 'n' backwards;
    // if (q == 0)
    //     return 0;
    // else
    //     cout << " " << q;
    // return number(q - 1);

    //Recursion to print number forward;
    if (q > 0)
    {
        number(q - 1);
        cout << q << " ";
    }
    return '\0';
}
int main()
{
    int a;
    cout << "Enter any number: ";
    cin >> a;
    cout << number(a);
    return 0;
}