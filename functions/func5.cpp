#include<iostream>
using namespace std;

//Recursion functions- It is mean that a functon is calling itself over and over
/*Drawback of recursion is that sometimes it gets complicated to
understand by humans.*/
int fib( int n)
{
  if(n<2)
  {
    return 1;
  }
  return fib(n-2)+fib(n-1); //fibonacci
}
//Step by step breakdown of fibonacci
//fib(5)
//fib(4)+fib(3)
//fib(2)+fib(3)+fib(2)+fib(3)

int Factorial(int n)
{
  if(n<=1)
  {
    return 1;
  }
  return n*Factorial(n-1);
}

int main()
{
  //Factorial of number
  //6!=6*5*4*3*2*1=720
  //n! = n*(n-1)!
  int anum;
  cout<<"Enter a number: ";
  cin>>anum;
  cout<<"The factorial of "<<anum<< " number is: "<<Factorial(anum)<<endl;
  cout<<"The term in fibonacci sequence at postion"<<anum<<" is "<<fib(anum)<<endl;

  return 0;
};
