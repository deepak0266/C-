#include <iostream>
using namespace std;
int table(int n,int m)
{
    if(m==0)
        return 0;
    int ans=n+table(n,m-1);
    cout<<n<<" X "<<m<<" = "<<ans<<endl;
    return ans;
}
int main()
{
    table(5,10); 
    return 0;
}