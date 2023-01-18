#include<iostream>
using namespace std;
int main()
{
  float sum, avg, product, price[20];
  for(int inum=0; inum<5;inum++)
  {
    cout<<"Enter the price of the item: ";
    cin>>price[inum];
    sum+=price[inum];
    product *=price[inum];
    avg = sum/inum;
  }
  cout<<"\n***********************"<<endl;
  cout<<"Sum of all prices: "<<sum<<endl;
  cout<<"Product of all prices"<<product<<endl;
  cout<<"Average of all the prices: "<<avg<<endl;
  return 0;
}
