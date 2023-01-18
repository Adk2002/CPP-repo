#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  //this code is to enter '_' in blank spaces;

  char string[80];
  cout<<"Enter the string: ";
  cin.getline(string, 80);   /*cin.getline reads a stream of character into  the string
                              buffer, it stop  when it has read length-1 character or 
                              when it finds a end-of-line '\n' character;*/

  int xnum=strlen(string); //strlen is used to print to length of the string;

  for(int inum=0;string[inum]!='\0';inum++) /*Now '\0' is a null character used to mark the end of
                                            the string*/
  {
    if(string[inum]==' ')
        string[inum]='_';
  }
  cout<<"The changed string is \n";
  cout.write(string, xnum);
  return 0;
}
