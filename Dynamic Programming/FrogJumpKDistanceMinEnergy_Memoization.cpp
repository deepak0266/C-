
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int FrogjumpKDist(int n, int k, vector<int>& heights, vector<int>& memo)
    {
        if (n == 0)
            return 0;
        if (memo[n] != -1)
            return memo[n];
        int minstep = INT_MAX;
        for (int i = 1; i <= min(k,n); i++)
        {
            if (n >= i)
            {
                int jumpenergy = FrogjumpKDist(n-i,k,heights,memo) + abs(heights[n] - heights[n - i]);

                minstep = min(minstep, jumpenergy);
            }
        }
        return memo[n] = minstep;
    }
};

int main()
{
    
    Solution sol;
    vector<int> heights = {10, 20, 30, 40, 50, 20, 10};
    int n = heights.size();
    int k = 2;
    vector<int> memo(n+1, -1); // Memoization table to store the minimum total cost for each step.
    cout << "Enter the number of stairs to climb by Frog: " << n << endl;
    cout << "Minimum total cost for the frog to jump stairs: " << sol.FrogjumpKDist(n - 1, k, heights, memo) << endl;
    return 0;

}