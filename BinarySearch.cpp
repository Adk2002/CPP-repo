#include <iostream>
using namespace std;

int Binary_Search(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
            start = mid - 1;
    } 

    return -1;
}
int main()
{
    int  size, key ;
    cout << "\nEnter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "\nenter the elements: ";
    for (int q = 0; q < size; q++)
    {
        cin >> arr[q];
    }
    cout<<"\nEnter the element to be searched: ";
    cin>>key;
    cout<<Binary_Search(arr, size, key);
 
    return 0;
}