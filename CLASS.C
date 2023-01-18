#include <stdio.h>
using namespace std;
int main()
{
    int fac;
    long long val = 1;
    printf("\nEnter the number: ");
    scanf("%d", &fac);
    for (int i = 2; i <= fac; i++)
    {
        val = val * i;
    }
    printf("the factorial of fac %d is: %d",fac, val);
}
