#include <iostream>
using namespace std;
int main()
{
    int i, n, pos, arr[10];
    cout << "\nEnter size of array: ";
    cin >> n;

    cout << "\nEnter the element of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the position from to delete number: ";
    cin >> pos;

    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    cout << "\nThe array after deletion: "<<endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}