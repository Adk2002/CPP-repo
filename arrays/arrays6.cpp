#include<iostream>
using namespace std;
//adding the elements of array
class maths_array
{
    private :
        int sum = 0;
    public:
        int adding(int arr[], int q )
        {
            for(int i = 0; i < q; i++)
            {
                sum = sum + arr[i];
            }
            return sum;
        }
        void display()
        {
            cout<<"\nThe number after adding \n"<<sum;
        }
};
int main()
{
    int num;
    maths_array p;
    cout<<"\nEnter number: ";
    cin>>num;
    int arr[num];
    cout<<"\nEnter elements: \n";
    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];
    }
    p.adding(arr, num);
    p.display();
    
return 0;
}