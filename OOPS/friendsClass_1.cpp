/*Not to use the friend class individualy
instead of using it the whole.
if the some class has 100 of function then this type 
of friend class can be used.*/
#include <iostream>
using namespace std;
class complex; // forward declaration
class calculator
{
public:
  int add(int a, int b)
  {
    return (a + b);
  }

  int sumRealComplex(complex, complex);
};
class complex
{
  int anum, bnum;
  friend class calculator; //using the whole calculator class as friends

public:
  void setnumber(int a, int b)
  {
     anum = a;
     bnum = b;
  }
  void printNumber()
  {
    cout << "Your number is" << anum << " + " << bnum << "i" << endl;
  }
};
int calculator::sumRealComplex(complex t1, complex t2) // Defination of the sumRealComplex
{
  return (t1.anum + t2.anum);
}
int main()
{
  complex t1, t2, c3;
  t1.setnumber(1, 6);
  t2.setnumber(2, 4);
  calculator calc;
  int result = calc.sumRealComplex(t1, t2);
  cout << "The sum of the real part of o1 and o2 is: " <<result<< endl;

  return 0;
}
