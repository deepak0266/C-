#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
        return 1;
    int ans=n*factorial(n-1);
}

int permutation(int n,int r)
{
    if(n<r)
        return 0;
    if(n==0)
        return 1;
    int ans=factorial(n)/factorial(n-r);
    return ans;
}

int main()
{
    int n=10;
    int r=4;
    int ans=permutation(n,r);
    cout << "Permutation of " << n << " choose " << r << " is: " << ans << endl;
    return 0;
}