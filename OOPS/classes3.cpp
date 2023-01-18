
/***********Memory allocation using classes*********/
// and how to use arrays in classes
#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setData(void);
    void setdisplay(void);
};

void shop::setData(void)
{
    cout << "Enter the product ID: "<<endl;
    cin >> itemId[counter];
    cout << "Enter the price of product: "<<endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::setdisplay(void)
{
    for(int inum=0; inum<counter;inum++)
    {
        cout<<"THe price of the item with Id "<<itemId[inum]<<" is"<<itemPrice[inum]<<endl;
    }
}
int main()
{
    int num;
    shop dukan;
    dukan.initcounter();
    while (num<5)
    {
        /* code */
        dukan.setData();
        num++;
    }

    dukan.setdisplay();
    
    return 0;
}