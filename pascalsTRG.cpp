#include<iostream>
using namespace std;
int main()
{
    //Pascals Triangle
    int rows;
    cout<<"\nEnter the rows: ";
    cin>>rows;
    cout<<endl;

    for(int i=0; i<rows; i++)
    {
        int val = 1;
        //1st inner loop
        for(int j = 1; j<(rows-i-1); j++) //this loop creates indentation space
        {
            cout<<"  ";
        }
        for(int k = 0; k <= i; k++)//this loop computes the binomial coefficiant.
        {
            cout<<" "<<val<<" ";
            
            val = val * (i - k)/(k + 1);
            
        }
        cout<<endl;
    }
    return 0;
}