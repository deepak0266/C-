#include<iostream>
#include<vector>
using namespace std;
int Fibo(int n)
{
    int prev2=0;
    int prev1=1;
    if (n == 0)
        return prev2;
    if (n == 1)
        return prev1;
    for(int i=2;i<=n;i++)
    {
        int curr=prev2+prev1;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;

}
int main()
{
    int n;
    cout<<"Enter the number of element sequence in Fibonacci Series: ";
    cin>>n;
    // vector<int >dp(n+1,-1);
    cout<<"Fibonacci Series::"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<Fibo(i)<<" ";
    }

}