#include <iostream>
#include<math.h>
using namespace std;
int t(int n)
{
    if(n==0)
        return n;
    if(n==1)
        return n;
    int ans=t(n-1)+t(n-2);
    cout<<ans<<" ";
    return ans;
}
int main()
{
    int n=7;
    t(n);
    return 0;
}