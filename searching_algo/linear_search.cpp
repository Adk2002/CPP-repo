#include <iostream>
using namespace std;
int linear_searched(int arr[], int num, int key)
{
    for (int i = 0; i <= num; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        else
            cout << "\nYou have entered the wrong key";
    }
    return -1;
}
int main()
{
    int num, key;
    cout << "\nEnter elements to be entered: ";
    cin >> num;

    int arr[num];
    cout << "\nEnter the elements: ";
    for (int q = 0; q < num; q++)
    {
        cin >> arr[q];
    }

    cout << "\nEnter the elements to be searched: ";
    cin >> key;

    cout << linear_searched(arr, num, key);
    return 0;
}