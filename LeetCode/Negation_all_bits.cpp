#include<iostream>
using namespace std;
int negation_all_bits(int n)
{
    int m=~n;
    int x=n^8;
    return x;
}
int main()
{
cout<<negation_all_bits(2);

}