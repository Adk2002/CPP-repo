#include<iostream>
using namespace std;
int main()
{
    /*pointers- It is a data type which holds the address of
    other data types.*/
    int anum=4;
    int *b=&anum;       // this means declaring a pointer using this type of syntax;

     // &-----> Address of operator for pointers;
    cout<<b<<endl;                              
    cout<<"the address of a is "<<&anum<<endl;
    cout<<"the address of a is "<<b<<endl;

   // *----->Dereference  of operator of pointers;
    cout<<"The value of address b is: "<<*b<<endl;      //This means the value of;

    //Pointer to pointer;
    int **c=&b;
    cout<<"the address of b is: "<<&b<<endl;
     cout<<"The value of address c is: "<<**c<<endl;
return 0;
}