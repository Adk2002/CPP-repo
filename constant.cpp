#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
    int num;
    cout<<"\t0=Area of circle, 1=Area of cylinder\n";
    cout<<"\nEnter what you want: ";
    const float pi =3.145;          //It is constant value that can be used
                                    //syntax of const..
    cin>>num;
    if (num==0)
    {
        
    float  area, radius;
    cout<<"Enter the radius: ";         
    cin>>radius;
    
    area=pi*radius*radius;
    cout<<"Area of the circle is: "<<area;
    }
    else if (num==1)
    {
        float sfarea,snum;
        cout<<"Enter the radius: ";
        cin>>sfarea;
        cout<<"Enter the height: ";
        cin>>snum;
        sfarea=2*pi*sfarea*snum+2*pi*snum*snum;
        cout<<"The surface area of a cylinder: "<<sfarea<<endl;
    }
    else 
    { 
     textcolor(RED);
     cout<<"fuck you";      /*does not needed to wrte printf or cprintf*/
    }
    return 0;
}