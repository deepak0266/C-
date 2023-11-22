#include <iostream>
#include <vector>
using namespace std;
class Solution
{
   private:
        void solve (string digit,string output,int index,vector<string> &ans,string mapping[])
        {
            if(index>=digit.length())
            {
                ans.push_back(output);
                return;
            }
            int number=digit[index]-'0';
            string value=mapping[number];
            for(int i=0;i<value.length();i++)
            {
                output.push_back(value[i]);
                solve(digit,output,index+1,ans,mapping);
                output.pop_back();
            }
        }    
   public: 
        vector <string>letterCombination(string digit)
        {
            vector<string> ans;
            if(digit.length()==0)
                return ans;
            string output="";
            int index = 0;
            string mapping[10]={"_","_","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            solve(digit,output,index,ans,mapping);
            return ans;
        }
};
int main()
{
    Solution obj;
    string digits = "79"; // Example input, change this to test different combinations
    vector<string> result = obj.letterCombination(digits);

    cout << "Letter Combinations for " << digits << " are:" << endl;
    for (const string &combination : result) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}
