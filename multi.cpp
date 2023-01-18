#include<iostream>
using namespace std;
int main()
{
  int num, inum;
  cout<<"Enter any number: ";
  cin>>num;
  while(inum<=10)
  {
    cout<<num<<" X "<<inum<<" = \n"<< num*inum;
    cout<<"\n";
    inum++;
  }
  return 0;
}
