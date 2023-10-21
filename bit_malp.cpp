#include<iostream>
#include<climits>
using namespace std;
int getbit(int num,int pos)
{
    return ((num&(1<<pos))!=0);
}
int main()
{
    int n,k;
    cout<<"Enter the number:: ";
    cin>>n;
    cout<<"Enter the pos for the bit:: ";
    cin>>k;
    cout<<"Output:: "<<getbit(n,k);
}