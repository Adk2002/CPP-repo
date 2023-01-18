/*using of more firends function example*/
#include <iostream>
using namespace std;
class ynum;
class xnum
{
  int data;
public:
  friend void swapping(xnum &, ynum &);
  void setdata(int a)
  {
    data = a;
  }
  void display(void)
  {
    cout << data << endl;
  }
};
class ynum
{
  int data2;

public:
  friend void swapping(xnum &, ynum &);
  void setdata(int anum)
  {
    data2 = anum;
  }
  void display(void)
  {
    /* code */
    cout << data2 << endl;
  }
};
/*trick to exchange any two numbers
temp=a;
a=b;
b=temp;*/
void swapping(xnum &x, ynum &y)
{
  int temp;
  temp = x.data;
  x.data = y.data2;
  y.data2 = temp;
}
int main()
{
  xnum xd;
  ynum yd;

  xd.setdata(45);
  yd.setdata(85);

  swapping(xd, yd);
  cout << "After the swapping of data is: ";
  xd.display();
  cout << "After the swapping of data is: ";
  yd.display();
  return 0;
}
