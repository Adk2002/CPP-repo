#include<iostream>
using namespace std;
int main()
{
    /*Bubble sorting algorithm
    Repeatedly swaping of adjacent elements 
    if they are in the wrong order */
    int user;
    cout<<"\nEnter number: ";
    cin>>user;
    int arr[user], elem;
    cout<<"Enter elements\n";
    for(int i = 0; i<user; i++)
    {
        cin>>arr[elem];
    }
    
    int counter = 1,temp;
    while(counter < user)
    {
        for(int j = 0; j< user-counter; j++)
        {
            if(arr[j]>arr[j+1])
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
        counter++;
    }
    for(int q = 0; q<= user; q++)
        cout<<arr[q]<<" "<<endl;

return 0;
}