#include<iostream>
using namespace std;
int main()
{
  int sales[2][6]; //Calculate the sales of two salesman for 6 months;
  int inum, jnum;
  unsigned long total;    //For Storin large numbers;
  for(inum=0;inum<2;inum++)    //Loop to read sales. (it controls salesman numbers);
  {
    total=0;        //loop for monthly sales reading;
    cout<<"\nEnter sales for salesman: "<<inum+1<<endl;
    for(jnum=0;jnum<6;jnum++)       //This loop controls the sales
                                    //for given salesman no.
    {
      cout<<"Months"<<jnum+1<<" ";
      cin>>sales[inum][jnum];     //read monthly sales
      total+=sales[inum][jnum];   //calculate total;
    }       //end of loop for months(jnum);
    cout<<endl;
    cout<<"Total no. of sale by salesman"<<inum+1<<"=Rs. "<<total<<endl;
  }   //end of loop for salemen(inum);
  return 0;
}
