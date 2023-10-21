#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,digit,ans=0;
    cout<<"Enter the number:: ";
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        if(ans>INT_MAX||ans<INT_MIN)
            return 0;
        ans=ans*10+digit;
    }
    cout<<"Reverse of a number :: "<<ans;
}