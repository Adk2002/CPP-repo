#include <iostream>
#include<stdlib.h>
using namespace std;

struct addr
{
  int houseno;
  char area[30];
  char city;            //Global difination
  char state;
};
struct employee
{
  int empno;
  char name[20];          //Another Structer
  char desig[16];
  addr address;
  float basic;
}worker;

int main()
{
  cout<<"\nEnter the employee no: ";
  cin>>worker.empno;
  cout<<"\nName: ";
  cin>>worker.name;
  cout<<"\nDisignstion: ";
  cin >>worker.desig;
  cout<<"\nEnter the address\n";
  cout<<"houseno: ";
  cin>>worker.address.houseno;
  cout<<"\nArea: ";
  cin>>worker.address.area;
  cout<<"\ncity: ";
  cin>>worker.address.city;
  cout<<"\nArea: ";
  cin>>worker.address.area;
  cout<<"\nState: ";
  cin>>worker.address.state;
  cout<<"\nBasicPay: ";
  cin>>worker.basic;      //End of main()

  return 0;

}
