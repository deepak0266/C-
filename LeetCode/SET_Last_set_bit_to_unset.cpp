#include<iostream>
using namespace std;
int SET_Last_bit_to_unset(int n)
{
    n= n & n-1;
    return n;
}
int main()
{
    int x=SET_Last_bit_to_unset(14);
    cout<<x;
}