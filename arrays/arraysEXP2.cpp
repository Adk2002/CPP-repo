#include <iostream>
using namespace std;
//to insert a number at a given location in array
int main()
{
    int i, n, num, pos, arr[10];
    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter number to be inserted: ";
    cin >> num;

    cout << "\nEnter the position: ";
    cin >> pos;

    /*this loop will move all the elements
    that have index greater than pos(one position)
    towards right*/

    //  i = n;
    // while (i >= posi)
    // {
    //     data[i + 1] = data[i];
    //     i--;
    // }

    // data[posi] = num;        //if i use while loop
    // n++;

    for (i = n; i >= pos; i--)
    {
        //increment the total number of array by i
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;//this'll inserted new value in desired pos
    n++;

    cout << "\nAfter insertion array is: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}