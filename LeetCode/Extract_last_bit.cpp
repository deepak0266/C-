#include<iostream>
using namespace std;
int extract_last_bit(int n)
{
    int m=n&~n;
    return m;
}
int extract_last_bit1(int n)
{
    int m=n&~(n-1);
    return m;
}
int extract_last_bit2(int n)
{
    int m=n^(n&(n-1));
    return m;
}
int main()
{
    cout<<extract_last_bit(10)<<endl;
    cout<<extract_last_bit1(10)<<endl;
    cout<<extract_last_bit2(10)<<endl;

}