#include <iostream>
using namespace std;
int reverse_array(int arr[], int n);
int main()
{
    int n, j;
    cout << "Number of  time to be executed: ";
    cin >> n;
    int arr[n];
    cout << "Enter array: ";
    for (j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    
    cout<<"The  ouput is: '\0'" << reverse_array(arr, n)<<endl;

    return 0;
}
int reverse_array(int arr[], int n) //function
{
  
    for (int i = n; i >= 0; i--)
    {
        cout << arr[i]<<endl;
    }
    cout<<endl;
    return ('\0');
}