#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[] = "10011000";
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

