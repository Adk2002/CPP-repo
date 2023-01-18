#include<iostream>
using namespace std;

/*****************Call by Value function**************/

// this will not swap
void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;

}
/**************call by reference using pointers******************/
void swapPointer(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
/*************Call by reference using C++ variables****************/
void swapReference(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=45; int b=56;
    //This will not work
    swap(a, b);
    cout<<"the value of a: "<<a<<"the value of b: "<<b;
    
    //this will work tho,
    swapPointer(&a, &b);
    cout<<"\nthe value of a: "<<a<<"the value of b: "<<b;

    //swap reference
    swapReference(a, b);
    cout<<"\nthe value of a: "<<a<<"the value of b: "<<b;

   
return 0;
}