#include <iostream>
#include<algorithm>
using namespace std;
int reverseString(int start,int n, string& name)
{
    if(start>=n)
        return 0;
    swap(name[start],name[n]);
    return reverseString(start+1,n-1,name);
}
int main()
{
    string name="abcdefghijkl";
    cout<<name<<endl;;
    reverseString(0,name.length()-1,name);
    cout<<name;
    
    return 0;
}