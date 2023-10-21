#include <iostream>
using namespace std;
int table(int n,int m)
{
    if(m==10);
    return 10;
    int ans=n*table(n,m+1);
    return ans;
}
int main()
{
    cout<<table(2,0);
    
    return 0;
}