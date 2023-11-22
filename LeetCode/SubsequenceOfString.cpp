#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(string &digit, string &output, int index, vector<string> &ans) {
        ans.push_back(output);

        for (int i = index; i < digit.length(); i++) {
            output.push_back(digit[i]);
            solve(digit, output, i + 1, ans);
            output.pop_back();
        }
    }

public:
    vector<string> Subsequence(string str) {
        vector<string> ans;
        string output = "";
        int index = 0;
        solve(str, output, index, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    string input = "abc"; // Example input, change this to test different strings
    vector<string> result = obj.Subsequence(input);

    cout << "Subsequences of " << input << " are:" << endl;
    for (const string &subseq : result) {
        cout << subseq << " ";
    }
    cout << endl;

    return 0;
}
