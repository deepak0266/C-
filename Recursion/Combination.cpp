#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
    return 1;
    int ans=n*factorial(n-1);
}
int combination(int n,int r)
{
    if(n<r)
        return 0;
    if(n==0)
        return 1;
    int ans=factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
}
int main()
{
    int n=10;
    int r=4;
    int ans=combination(n,r);
    cout << "Combination of " << n << " choose " << r << " is: " << ans << endl;
       
    return 0;
}