#include<iostream>
using namespace std;
/*********Classes********/
class emloyee
{
    private:
        int a, b, c;
    public: 
        int d, e;
        void setdata(int a, int b, int c);  //declaration;
        void getdata()
        { 
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;

        }
};
void emloyee :: setdata(int a1, int b2, int c3)
{
    a=a1;
    b=b2;
    c=c3;

}

int main()
{

    emloyee aditya;
    // aditya.a=48; //it'll not work because it is set in a private class;
    aditya.d=45;
    aditya.e=89;
    aditya.setdata(1,2,3);
    aditya.getdata();
    
return 0;
}