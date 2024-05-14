// Answer galat aa rha hai!!!!

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
        int prev1=0;
        int prev2=0;
        int curr;
        int secondstep=INT_MAX;
        for (int i = 1; i < n; ++i) 
        {
            int firststep=prev1+abs(heights[i-1]-heights[i]);
            if(i>1)
                secondstep=prev2+abs(heights[i-2]-heights[i]);

            curr=min(firststep,secondstep);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
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
