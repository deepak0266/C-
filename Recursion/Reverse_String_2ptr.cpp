#include <iostream>
#include<algorithm>
using namespace std;
int reverse(int start,int last, string& name)
{
    if(start>last)
        return 0;
    if(start<last)
        swap(name[start],name[last]);
    return reverse(start+1,last-1,name);
}
int main()
{
    string name="abcdefghijkl";
    reverse(0,name.length()-1,name);
    cout<<name;
    
    return 0;
}