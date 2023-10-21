#include <iostream>
using namespace std;
int power(int n)
{
    if (n==0)
    return 1;
    int pow=2*power(n-1);
    cout<<"2^"<<n<<" = "<<pow<<endl;
    return pow;
}
int main()
{
    int n=4;
    cout<<power(n)<<endl;
    return 0;
}