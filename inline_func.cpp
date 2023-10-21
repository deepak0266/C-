#include <iostream>
#define temp 6
using namespace std;
inline int inline_func(int n)
{
    return (n>n+1)?n:n+1;
}
int main()
{
    int n=99;
    cout<<inline_func(n);
    return 0;
}