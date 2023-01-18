/*using Friends Function in classes*/
#include <iostream>
using namespace std;
class complex
{
    int anum, bnum;

public:
    void setNumber(int num, int num1)
    {
        anum = num;
        bnum = num1;
    }
    friend complex sumComplex(complex o1, complex o2); // Now this is the wy of using of friends function;
    void printNumber()
    {
        cout << "Your number is " << anum << " + " << bnum << "i" << endl;
    }
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.anum + o2.anum), (o1.bnum + o2.bnum)); // Now this will through error if we dont use friends function;
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(2, 4);
    c1.printNumber();

    c2.setNumber(6, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/*properties of friend function

1.Not in the scope of class
2.since it is not it the scope of class, it cannot be called from the  object of the class--> c1.sumComplex()
==invalid
3.can be invoked whitout the help of any objects
4.usually contains the objects  as arguments
5.can be declared inside the public or private section of the class
6.it cannot acces the members directly by their names and need objects_name.member_name
to access any member
*/
