#include<iostream>
using namespace std;
int main()
{
    int wum;
    cout<<"Enter number: ";
    cin>>wum;
    cout<<"\nEnter array: ";
    int arr[wum];
    for(int i = 0; i < wum; i++)
    {
        cin>>arr[i];
    }
    // for(int q = 0; q <= wum - 1; ++q)
    // {
    //     if(q%2==0)
    //     {
    //         cout<<arr[q]<<" ";
    //     }
    // }

    for(int q =0; q <= wum-1; q=q+2)
    {
        cout<<arr[q]<<" ";
    }

return 0;
}