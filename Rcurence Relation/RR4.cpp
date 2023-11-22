#include <iostream>
#include<math.h>
using namespace std;
int t(int n)
{
    if(n==1)
        return 1;
    int ans=t(n-1)+log(n);
    cout<<ans<<" ";
    return ans;
}
int main()
{
    int n=10;
    t(n);
    return 0;
}