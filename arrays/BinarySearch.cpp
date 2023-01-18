#include <iostream>
using namespace std;
int main()
{
    int arr[10], num, i, n, beg, end, mid,
        found = 0;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to be searched: ";
    cin >> num;

    beg = 0, end = n - 1;

    //The binary logic start form here
    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == num)
        {
            cout << num << " is present in the array at position = " << mid;

            
            break;
        }

        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    if( beg > end && found == 0)
    {
        cout<<num<<" doesn't exist in the array.";
    }
    return 0;
}