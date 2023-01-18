/*to find the second largest largest
number using an array*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, n, arr[20], pos, large, second_large;
    cout << "Enter the number of the element in the array:";
    cin >> n;
    for (i = 0; i < n; i++) // this loop to print "Enter the number"
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    large = arr[0];
    pos = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            pos = i;
        }
    }

    second_large = arr[n-pos-1];
    for(i=0; i<n; i++)
    {
        if(i != pos)
        {
            if(arr[i]>second_large)
            {
                second_large = arr[i];
            }
        }
    }
    cout << "\nThe number you entered are: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    cout << "\nThe largest of this number is: " << large;
    cout << "\nThe second largest of this number: " << second_large;

    return 0;
}