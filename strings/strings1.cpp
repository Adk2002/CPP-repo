// CPP program to illustrate
// Different methods to find length
// of a string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	// // 4. size of string object Using while loop
	// // while 'NOT NULL'
	// int i = 0;
	// while (str[i])
	// 	i++;
	// cout << i << endl;

	// // 5. size of string object using for loop
	// // for(; NOT NULL 
	// for (i = 0; str[i]; i++)
	// 	;
	// cout << i << endl;
    string str ;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"The string length is: "<<str.size()<<endl;
    cout<<"The string length is: "<<str.length()<<endl;
    cout<<"The string length is: "<<strlen(str.c_str());
    return 0;
}
