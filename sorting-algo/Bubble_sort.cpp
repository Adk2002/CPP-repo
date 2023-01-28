#include <iostream>
using namespace std;
int main()
{
    /*Bubble sorting algorithm
    Repeatedly swaping of adjacent elements
    if they are in the wrong order */
    int num;
    cout << "Enter number: ";
    cin >> num;

    int arr[num];
    cout << "\nEnter unsorted array \n";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    // the main bubble logic start
    int counter = 1;
    while (counter < num)
    {
        for (int i = 0; i < num - counter; i++)
        {
            if (arr[i] > arr[i + 1]) // checking if left array > right array then swap
            {
                swap(arr[i + 1], arr[i]);
            }
        }
        counter++;
    }

    // this loop is to print the sorted array
    for (int n = 0; n < num; n++)
    {
        cout <<"Sorted\n"<< arr[n] << " ";
    }
    return 0;
}