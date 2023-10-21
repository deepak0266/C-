#include <iostream>
#include<algorithm>
using namespace std;
string lowercase(string &s)
{
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]-'A'+'a';
    }
}
string sort(string &s)
{
    int n=s.length();
    sort(s.begin(),s.end());
}
int main()
{
    string str="AsSskdfSKSAIDJ";
    lowercase(str);
    cout<<str<<endl;
    sort(str);
    cout<<str<<endl;
    
    return 0;
}