#include <iostream>
using namespace std;
int countbit(int n)
{
    if(n<0)
    cout<<"Diya hua number chota hai Zero se"<<endl;
    int count=0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int n=4565;
    cout<<countbit(n);
       
    return 0;
}