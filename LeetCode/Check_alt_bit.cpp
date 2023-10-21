#include<iostream>
using namespace std;
bool checkaltbit(int n)
{
    int i=0;
    while(n)
    {
        i++;
        int m=n&(1<<i)!=0;
        int k=n&(1<<i+1)!=0;
        int y=n&(n-1);
        cout<<"y:"<<y<<endl;
        cout<<"m:"<<m<<endl;
        cout<<"k:"<<k<<endl;
        if(m==k)
            return false;
    }
    return true;
}
int main()
{
    int n=10;
    cout<<checkaltbit(n);
}