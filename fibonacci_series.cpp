#include <iostream>
using namespace std;
int main()
{
    // fibonacci series 0 1 1 2 3 5 8......N
    int qum, a = 0, b = 1, c;
    cout << "\nEnter the term....: ";
    cin >> qum;
    int z = 1;
    do
    {
        /* code */
        cout<<a<<endl;
        c = a + b;
        a = b;
        b = c;
        z++;
    } while (z <= qum);

    return 0;
}