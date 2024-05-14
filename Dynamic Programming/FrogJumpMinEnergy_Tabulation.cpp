#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int Frogjump(vector<int>& heights)
    {
        int n = heights.size();
        vector<int> dp(n, 0); // Table to store the minimum total cost for each step
        
        // Base case: minimum total cost to reach step 0 is 0
        dp[0] = 0;
        
        int secondstep=INT_MAX;
        int firststep=INT_MAX;
        // Iterate through the steps from 1 to n
        for (int i = 1; i < n; ++i) 
        {
            firststep=dp[i-1]+abs(heights[i-1]-heights[i]);
            if(i>1)
            secondstep=dp[i-2]+abs(heights[i-2]-heights[i]);
            dp[i]=min(firststep,secondstep);

        }
        return dp[n-1];
    }
};

int main()
{
    Solution sol;
    vector<int> heights = {10, 20, 30, 40, 50, 20, 10};
    int n=heights.size();
    cout << "Enter the number of stairs to climb by Frog: "<<n<<endl;
    cout << "Minimum total cost for the frog to jump stairs: " << sol.Frogjump(heights) << endl;
    return 0;
}
