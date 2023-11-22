#include <iostream>
using namespace std;
int t(int n)
{
    if (n==1||n==0)
        return 1;
    // cout<<n<<" ";
    int ans=t(n/2)+2*n;
    cout<<ans<<" ";
    return ans;
}
int main()
{
    int n=1555;
    cout<<t(n);
    return 0;
}