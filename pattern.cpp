#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i=n;i>0;i--) {

        int count = 0;

        for (int j=n;j>0;j--) {

            while (count<i) {

                cout<<j<<" ";

                count++;

            }

            count = 0;

        }

        cout<<endl;

    }
    return 0;
}