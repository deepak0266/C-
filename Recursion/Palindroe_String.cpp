#include <iostream>
#include<algorithm>
using namespace std;
int reverseString(int start,int last, string& name)
{
    if(start>last)
        return 0;
    if(start<last)
        swap(name[start],name[last]);
    return reverseString(start+1,last-1,name);
}
bool checkpalindrome(string name,int first,int last)
{
    if(first>last)
        return false;
    if(name[first]!=name[last])
        return false;
    checkpalindrome(name,first+1,last-1);
    return true;
}
int main()
{
    string name="abcdedcba";
    cout<<name<<endl;;
    reverseString(0,name.length()-1,name);
    cout<<name<<endl;;
    int ans=checkpalindrome(name,0,name.length()-1);
    if(ans)
        cout<<"The given string is palindrome";
    else
        cout<<"The given string is not palindrome";
    return 0;
}