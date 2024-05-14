#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if(n==0||n==1)
            return 1;
        vector<int >tabu(n+1,0);
        tabu[0]=tabu[1]=1;
        for(int i=2;i<=n;i++)
        {
            tabu[i]=tabu[i-1]+tabu[i-2];
        }
        return tabu[n];
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways to climb stairs: " << sol.climbStairs(n) << endl;
    return 0;
}
