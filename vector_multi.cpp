//User function Template for C++
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int>s;
        for( int i=1;i<=10;i++)
        {
            int n=N*i;
            s.push_back(n);
        }
        return s;
        
        // Write Your Code here
    }
};
int main()
{
    
return 0;
}
