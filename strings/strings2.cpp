#include <iostream>
#include <string>
#include <algorithm>
/*to print the UPPERCASE string 
to lowercase string*/
using namespace std;

int main()
{
    // string text;

    // cout << "\nEnter the String to Convert: ";
    // getline(cin, text);

    // transform(text.begin(), text.end(), text.begin(), ::tolower);

    // cout << "\nThe Given String in Uppercase = " << text;

    /*another way to do this*/

    string lwTxt;
	
	cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
	getline(cin, lwTxt);
	
	for (int i = 0; i < lwTxt.length(); i++)
  	{
  		if(lwTxt[i] >= 'a' && lwTxt[i] <= 'z')
  		{
  			lwTxt[i] = lwTxt[i] - 32;
		}
  	}
  	
	cout<< "\nThe Given String in Uppercase = " << lwTxt;

    return 0;
}