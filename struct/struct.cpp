#include<iostream>
using namespace std;

//Now this fucking code show that how to use struct

typedef struct employee             //now this typedef function is to easier the struct;
{
    /* data */                           //typedef ka meaning hai jisko mai struct bolana chahta tha, mai isko ep bolunga;
    int eId;
    char favchar;
    float salary;
}ep;                                //after writting the typedef ep is necessary to enter;
    //Now using of unions
union money
{
    /* data */
    int dollar;
    char gold;
    float pounds;
};

int main()
{
    // union money m1;
    // m1.dollar=45;
    // m1.pounds=78.2;
    // cout<<m1.gold<<endl;

    // ep ankush;
    // ankush.eId = 145370;
    // ankush.favchar='a';
    // ankush.salary=1400000000;
    // cout<<ankush.salary<<endl;
    // cout<<ankush.favchar<<endl;
    // cout<<ankush.eId<<endl;

    //using of enum;

    enum meal{breakfast,lunch,dinner};
    meal m1 =lunch;
    cout<<(m1==1);
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    return 0;
}
