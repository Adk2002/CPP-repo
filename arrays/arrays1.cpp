#include<iostream>
using namespace std;
const int size=5;
int main()
{             //Program to read 5 cars price and store them under an array;
            //And also add the price;
  float car[size];
  for(int inum; inum<size; inum++)
  {
    cout<<"Enter the prize of the car: ";
    cin>>car[inum];
  }
  cout<<endl;
  for(int num; num<size; num++)
  {

    float sum;
    sum+=car[num];
      cout << "Price of the car[" <<num<<"]: "<<car[num]<<endl;
    cout<<"\n"<<sum;
  }

  return 0;
}
