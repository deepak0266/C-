#include <iostream>
using namespace std;
int t(int n)
{
    if(n==1)
        return 1;
    int ans=t(n/2)+9;
    cout<<ans<<" ";
    return ans;
}
int main()
{
    int n=100;
    t(n);
    return 0;
}