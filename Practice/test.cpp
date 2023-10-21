#include<iostream>
using namespace std;
int test(int n)
{
    int m=n&1;
    int y=n&(n-1);
    cout<<m<<endl;
    cout<<y<<endl;

}
int main()
{
    int n=7;
    test(n);
}