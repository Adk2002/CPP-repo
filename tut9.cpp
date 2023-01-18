#include<iostream>
using namespace std; 
int main()
{
    int num;
    cout<<"Enter your age: ";
    cin>>num;
    // if (num==18)                 //This if, else-if, else ladder;
    //   cout<<"You will get a minor pass..";
    // else if(num>18)
    //   cout<<"Yes you can come to the party..";
    // else
    //   cout<<"You can't come to the party.";
    // return 0;  
    switch (num)               //This is switch key ladder;
    {
    case 18:
        /* code */
        cout<<"yes you can come to the party";
        break;
    case 19:
        cout<<"you will get a major pass";
        break;
    
    default:
        cout<<"Fuck Off";
        break;
    }
}