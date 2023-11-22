#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    private:
        void solve(vector<int>nums,vector<int> output,int index,vector<vector<int>> &ans)
        {
            if(index>=nums.size())
            {
                ans.push_back(output);
                return;
            }

            // Exclude
            solve(nums,output,index+1,ans);

            //Include
            int element=nums[index];
            output.push_back(element);
            solve(nums,output,index+1,ans);
        }
    
    public:
    vector <vector<int>> subset(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};
int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3,7}; // Replace this with your desired set of numbers
    vector<vector<int>> result = solution.subset(nums);

    // Printing the subsets generated
    for (const auto &subset : result)
    {
        cout << "[";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
