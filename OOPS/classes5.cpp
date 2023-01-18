#include<iostream>
using namespace std;
/******This code is to show, that how to use arrays in objects******/
// For uncomplex numbers;
class employee
{
  int Id;
  int salary;
public:
  void setid(void)
  {
    salary=122;
    cout<<"Enter the id of the employee: "<<endl;
    cin>>Id;
  }
  void getid(void)
  {
    cout<<"The id of the employee is: "<<Id<<endl;
  }
};
int main()
{
  // employee aditya, deep, aniket, bidisha;
  // aditya.setid();
  // aditya.getid();
  //
  // deep.setid();
  // deep.getid();
  //
  // aniket.setid();
  // aniket.getid();
  //
  // bidisha.setid();
  // bidisha.getid();

  /*this is when the member is to much*/
  employee CoinFunds[4];
  int num=0;
  while(num<=4)
  {
    CoinFunds[num].setid();
    CoinFunds[num].getid();
    num++;
  }

  return 0;
}
