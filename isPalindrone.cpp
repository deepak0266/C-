#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    bool isalpha(char& ch) 
    {
        ch = tolower(ch);
        return ch;
    }
    bool isPalindrome(string s) 
    {
        int l = 0;
        int h = s.size() - 1;

        while (l < h) 
        {

            if (isalpha(s[l]) && isalpha(s[h])) {
                l++;
                h--;
            }
             if (isalpha(s[l]) != isalpha(s[h])) {
                return false;
            }
            if (!isalpha(s[l])) {
                l++;
            } else {
                h--;
            }
        }
        return true;
    }

    string isalpha2(string & str) 
    {
        string ans="";
        for(char ch:str)
            ans.push_back(tolower(ch));
        return ans;
    }
};

int main()
{
    Solution sol;
    string st="A man is, si nam A";
    string s="race a car";
    cout<<(sol.isPalindrome(s));
    cout<<endl<<endl;
    
    cout<<(sol.isalpha2(s));

}

