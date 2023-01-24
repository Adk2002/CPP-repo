// #include<iostream>
// using namespace std;
// int main()
// {
//     int qum;
//     cout<<"Enter the number; ";
//     cin>>qum;
//     for(int i = 1; i<=10; i++)
//     {
//         cout<<qum*i;
//     }
// return 0;
// }
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[] = "10010111";
	int length = strlen(str);
	int i = length - 1;
	while (str[i] == '1') {
		str[i] = '0';
		i--;
	}
	if (i >= 0)
		str[i] = '1';
	printf("% s", str);
}
