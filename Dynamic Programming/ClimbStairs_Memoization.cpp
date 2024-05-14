#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        vector<int> memo(n + 1, -1); // Initialize memoization array with -1
        return climb(n, memo);
    }

    int climb(int n, vector<int> &memo)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        if (memo[n] != -1)
        {
            return memo[n];
        }
        return memo[n] = climb(n - 1, memo) + climb(n - 2, memo);;
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
