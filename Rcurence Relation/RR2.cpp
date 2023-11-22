#include <iostream>
using namespace std;
int t(int n)
{
    if(n==1)
        return 1;
    int ans=2*t(n/2)+n;
    cout<<ans<<" ";
    return ans;
}
int main()
{
    int n=10;
    t(n);
    return 0;
}