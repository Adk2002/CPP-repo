#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  char inum[50];
  cout<<"Enter Your Name: ";
  cin>>inum;
  for(inum[50]=0;inum[50]<16;inum[50]++)
  {
    textcolor(inum[50]);
    printf("Ohh!...Hiii...:");
    cprintf(inum);
    printf("\n\t\t\t");
  }
  getch();
}
