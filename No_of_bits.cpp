#include <iostream>
using namespace std;
int countbit(int& n)
{
    int count=0;
    while(n!=0)
    {
        n=n>>1;
        count++;
    }
    return count;
}
int main()
{
    int a=90;
    cout<<"Enter the number :: "<<a<<endl;
    cout<<countbit(a);
    return 0;
}