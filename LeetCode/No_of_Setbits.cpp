#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int count =0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    cout<<endl<<count;
}