#include <iostream>
#include<math.h>
using namespace std;
bool power(int &a,int &b)
{
    if(a<=0)
    return false;
    if(b<=0)
    return false;
    double ans= log(b)/log(a);
    return (ans==int(ans)?true:false);
}
int main()
{
    int a=8,b=2;
    cout<<"Enter the number A:: "<<a<<endl;
    cout<<"Enter the number B:: "<<b<<endl;
    int ans=power(a,b);
    (ans==1)?(cout<<"Yes!it is"):(cout<<"No!");
    return 0;
}
