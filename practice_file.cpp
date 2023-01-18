#include<iostream>
using namespace std;
int main()
{
    int qum, arr[100];
    cout<<"\nEnter a number: ";
    cin>>qum;
    cout<<"\nEnter array elements: ";
    for(int i = 0; i<qum;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<qum;i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}