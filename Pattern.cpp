#include<iostream>
using namespace std;
int main()
{
    int n=9;
    for (int i =0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(i==j||i-j==1||j%2==0 && i%2==0 && i-j==2)
            cout<<"*";

            else 
            cout<<" ";
        }
        cout<<endl;
    }
}