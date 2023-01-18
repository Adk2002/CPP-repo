/******************************************

Combination of arrays and structure example

*******************************************/

#include<iostream>
using namespace std;
struct Addr
{
    int houseno;        //global defination
    char area[26];
    char city[26];
    char state[26];
};

struct Emp
{
    int empno;
    char name[30];
    char desig[16];     //another structer
    Addr address;
    float basic;
}worker;
Emp sales_emp[10];      //creats array of structer of emp type
void display(int anum);
void enter(void);       //prototypes declared
//Main function start from here
int main()
{
    int eno, inum;
    char ch;
    enter();
    do         // loop to find the given employee no
    {
        /* code */
        cout<<"\nEnter employee no: ";
        cin>>eno;
        int flag =0;
        for(inum=0;inum<5;inum++)
        {
            if (sales_emp[inum].empno==eno) //if found then
            {
                display(inum);
                flag =1;
                break;
            }
            if(!flag)
            {
                cout<<"Sorry!! No such employee exits."<<endl;
            }
            cout<<"Display more(y/n): ";
            cin>>ch;
        }
    } while (ch=='y');
    return 0;
}
    void enter(void)
    {
        for(int inum=0;inum<2;inum++)
        {
            cout<<"Employee no.: "<<endl;
            cin>>sales_emp[inum].empno; //using of array in struct
            cout<<"Employee Name: "<<endl;
            cin>>sales_emp[inum].name;
            cout<<"Designation: "<<endl;
            cin>>sales_emp[inum].desig;
            cout<<"address:  ";
            cout<<"House no. ";
            cin>>sales_emp[inum].address.houseno;
            cout<<"Area: "<<endl;
            cin>>sales_emp[inum].address.area;
            cout<<"City: "<<endl;
            cin>>sales_emp[inum].address.city;
            cout<<"State: "<<endl;
            cin>>sales_emp[inum].address.state;
            cout<<"Basic pay: "<<endl;
            cin>>sales_emp[inum].basic;
        }
        return;
    }
    void display(int anum)
    {
        cout<<"Employee data: "<<endl;
        cout<<"Employee Number: "<<endl;
        cout<<"Employee Name: "<<endl;
        cout.write(sales_emp[anum].name,30);


        return;
    }
