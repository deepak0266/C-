#include<iostream>
#include<vector>
using namespace std;
#include<climits>
int Fibo(int number,vector<int> &dp)
{
    if(number<=1)
        return number;
    if(dp[number]!=-1)
        return dp[number];
    return dp[number]=Fibo(number-1,dp)+Fibo(number-2,dp);
}
int main()
{

    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    vector <int> dp(n+1,-1);

    cout << "Fibonacci Series:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << Fibo(i,dp) << " ";
    }
    return 0;

}