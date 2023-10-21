#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==0||n==1)
    return 1;
    int fibon=fibo(n-1)+fibo(n-2);
    cout<<fibo(n-1)<<" + "<<fibo(n-2)<<" = "<<fibon<<endl;;
    return fibon;
}
int main()
{
    cout<<fibo(3)<<endl;
    return 0;
}