#include <iostream>
using namespace std;
int main()
{
    int fact;
    long long value = 1;
    cout << "Enter the number: ";
    cin >> fact;
    for (int i = 1; i <= fact; i++)
    {
        value = value * i;
    }
    cout << value;
    return 0;
}
