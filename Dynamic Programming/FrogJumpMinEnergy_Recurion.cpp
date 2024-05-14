#include <iostream>
#include <vector>
#include<climits>
// #define INT_MAX 2147483647
using namespace std;

class Solution
{
public:
    int Frogjump(int n,vector<int>&heights)
    {
        if(n==0)
            return 0;
        // No of possible ways so frog can jump i.e. 1 or 2 steps at a time

        int left=Frogjump(n-1,heights)+abs(heights[n]-heights[n-1]);
        int right = INT_MAX;
        if(n>1)
        
        right=Frogjump(n-2,heights)+abs(heights[n]-heights[n-2]);
        
        return left < right ? left : right;
    }
};

int main()
{
    Solution sol;
    vector<int> heights={10,20,30,40,50,20,10};
    int n=heights.size();
    cout << "Enter the number of stairs to climb by Frog: "<<n<<endl;
    cout << "Minimum total cost for the frog to jump stairs: " << sol.Frogjump(n - 1, heights) << endl;
    return 0;
}
