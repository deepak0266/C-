#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int Frogjump(int n, vector<int>& heights, vector<int>& memo)
    {
        // Base case: if the frog is at step 0, return 0.
        if (n == 0)
            return 0;

        // If the minimum total cost for step n has already been computed, return it from memo.
        if (memo[n] != -1)
            return memo[n];

        // Calculate the minimum total cost for step n.
        int cost1 = Frogjump(n - 1, heights, memo) + abs(heights[n] - heights[n - 1]);
        int cost2 = INT_MAX; // Initialize to maximum value.
        if (n > 1)
            cost2 = Frogjump(n - 2, heights, memo) + abs(heights[n] - heights[n - 2]);

        // Store the minimum total cost for step n in memo.
        memo[n] = min(cost1, cost2);

        // Return the minimum total cost for step n.
        return memo[n];
    }
};

int main()
{
    Solution sol;
    vector<int> heights = {10, 20, 30, 40, 50, 20, 10};
    int n = heights.size();
    vector<int> memo(n, -1); // Memoization table to store the minimum total cost for each step.
    cout << "Enter the number of stairs to climb by Frog: " << n << endl;
    cout << "Minimum total cost for the frog to jump stairs: " << sol.Frogjump(n - 1, heights, memo) << endl;
    return 0;
}
