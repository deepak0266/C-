#include<iostream>
using namespace std;
int last_bit(int n)
{
    n=n&1;
    return n;
}
int main()
{
    cout<<last_bit(5);

}