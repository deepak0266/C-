#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int i=3;
    cout<<(num & ~(1<<i));
}