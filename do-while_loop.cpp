#include<iostream>
using namespace std;
int main()
{
    int i=0;
    do                          /*Syntax for 'do-while loop
                                do 
                                { 
                                    loop body
                                }while(condition);*/
    {
        cout<<i<<endl;
        i++;
    } while (i<=20);
    
    return 0;
}