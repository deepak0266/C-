#include <iostream>
using namespace std;
int prime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;        
        }
    }
    if (flag)
        cout<<"false"<<endl;
    else
        cout<<"True"<<endl;
}
int main()
{
    int n=11;
    prime(n);
    return 0;
}