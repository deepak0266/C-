#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
    return n;
    if(n==1)
    return n;
    int fibon=fibo(n-1)+fibo(n-2);
    cout<<fibo(n-1)<<" + "<<fibo(n-2)<<" = "<<fibon<<endl;;
    return fibon;
}
int main()
{
    cout<<fibo(3)<<endl;
    return 0;
}