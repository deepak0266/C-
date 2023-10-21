#include <iostream>
using namespace std;
int get_sum(int *n)
{
    int sum=0;
    for(int i=0;i<5;i++)
    sum+=n[i];
    cout<<sum<<endl;
}
int main()
{
    int c;
    cin>>c;
    int *n=new int[c];
    for(int i=0;i<c;i++)
        cin>>n[i];
    get_sum(n);
    
    return 0;
}