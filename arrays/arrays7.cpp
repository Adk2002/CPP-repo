/*Program to print the missing number in the array
For example

Input
N = 5
arr{1,2,3,5}

Output
missing array is 4
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        int sumArr = 0;
        for (int i = 0; i < array.size(); i++)
        {
            sumArr = sumArr + array[i];
        }
        int a = array.size();
        int expectSum = (n * (n + 1)) / 2;
        int Subtract = expectSum - sumArr;

        return Subtract;
    }
};
int main()
{
    int n;
    vector<int> array(n-1);
    cout<<"\nEnter number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i <= n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    Solution obj;
    cout<<"Output: ";
    obj.MissingNumber(array, n);
    
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;

    //     vector<int> array(n - 1);
    //     for (int i = 0; i < n - 1; ++i)
    //         cin >> array[i];
    //     Solution obj;
    //     cout << obj.MissingNumber(array, n) << "\n";
    // }
    return 0;
}