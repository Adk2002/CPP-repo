/********Using of Inline Functions**********/

#include<iostream>
using namespace std;
inline int product(int x, int y)    /*Now inline function only used whent the function is to short
                 otherwise dont if you use a very long inline function
                  it will take too much of ram*/
{
    return x*y;
}

// int product(int x, int y) //dont use inline function in static 
// {
//     static int c=0; //this executes only onces
//     c=c+1; //Next time this function will run, the value of c will be retained;
//     return x*y+c;   
// }

/**********Default Arguments********/
float moneyReceived(int currentmoney, float factor=1.08)
{
    return currentmoney*factor;
}
int main()
{
    int a, b;
    // cout<<"Enter the value of a and b: ";
    // cin>>a>>b;
    // cout<<"Te product of a and b is: "<<product(a, b)<<endl;
    // cout<<"Te product of a and b is: "<<product(a, b)<<endl;
    // cout<<"Te product of a and b is: "<<product(a, b)<<endl;
    // cout<<"Te product of a and b is: "<<product(a, b)<<endl;
    // cout<<"Te product of a and b is: "<<product(a, b)<<endl;

    /*********Using of Default Arguments**********/
    int money=100000;
    cout<<"If you have"<<money<<"Rs in your bank account, you'll receive"<<moneyReceived(money)
    <<"Rs after 1 year"<<endl;
    cout<<"For VIP if you've"<<money<<"Rs in your bank account, you'll receive"<<moneyReceived(money,1.1)
    <<"Rs after 1 year"<<endl;

return 0;
}