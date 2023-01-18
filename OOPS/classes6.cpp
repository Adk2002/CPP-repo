/*This code is used to show that how to use arrays in objects*/
//With complex numbers;
#include<iostream>
using namespace std;
class complex
{
  int anum;
  int bnum;

public:
  void setdata(int v1, int v2)
  {
    anum=v1;
    bnum=v2;
  }

  void setdataBysum(complex o1, complex o2)
  {
    anum=o1.anum + o2.anum;
    bnum=o1.bnum + o2.bnum;
  }

  void printNumber()
  {
    cout<<"Your complex number is: "<<anum<<" + "<<bnum<<"i"<<endl;
  }
};
int main()
{
  complex c1 ,c2, c3;
  c1.setdata(1, 2);
  c1.printNumber();

  c2.setdata(3, 4);
  c2.printNumber();

  c3.setdataBysum(c1, c2);
  c3.printNumber();
  return 0;
}
