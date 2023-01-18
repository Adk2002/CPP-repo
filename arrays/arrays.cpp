#include<iostream>
using namespace std;
int inum;
int main()
{
  //arrays- it is to assigned multiple values of in one variable;

  //so it is the simple syntex of arrays;
  int marks[6]={45,69,64,78,56,85};
  // cout<<marks[0]<<endl;
  // cout<<marks[1]<<endl;
  // cout<<marks[2]<<endl;
  // cout<<marks[3]<<endl;

  //using arrays in do-while loop example;
  // do {
  //   /* code */
  //   cout<<marks[inum]<<endl;
  //   inum++;
  // } while(inum<4);
  // return 0;

  //Using aarays with while loop example
  while (inum<6) {
    /* code */
    cout<<marks[inum]<<endl;
    inum++;
  }
  for(int anum; anum<6;anum++)
  {
    cout<<"The address of "<<marks[anum]<<" is: "<<marks<<endl;
  }
  //using Pointers in arrays examles;
  int* p=marks;

  cout<<"The value of marks[0] is: "<<*p<<endl;
  cout<<"The value of marks[1] is: "<<*(p+1)<<endl;
  cout<<"The value of marks[2] is: "<<*(p+2)<<endl;
  cout<<"The value of marks[3] is: "<<*(p+3)<<endl;
  cout<<"The value of marks[4] is: "<<*(p+4)<<endl;
  cout<<"The value of marks[5] is: "<<*(p+5)<<endl;
}
