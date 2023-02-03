#include <iostream>
using namespace std;
int updateBit(int n, int pos, int value) //This example is for UpdateBit
/*Update Bit is nothing just clear bit and then set bit*/
{

    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}
int main()
{
    cout<<updateBit(5,1,1);
    return 0;
}