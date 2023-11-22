#include <iostream>
using namespace std;
int t(int n)
{
    if(n==1||n==0)
        return 1;
    int ans=t(n-1)+t(n-1);
    cout<<ans<<" ";
    return ans;
}
int main()
{
    int n=10;
    cout<<t(n);
    
    return 0;
}