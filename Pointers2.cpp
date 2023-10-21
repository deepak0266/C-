#include <iostream>
using namespace std;
int main()
{
    int i=66;
    int *p=&i;
    // int **q=&p; 
    cout<<i<<endl;
    cout<<p<<endl;

    cout<<&p<<endl;
    cout<<*p<<endl;
    
    cout<<i++<<endl;
    cout<<i++<<endl;

    // cout<<p++<<endl;
    // cout<<p++<<endl;
    
    cout<<(*p)++<<endl;
    cout<<i<<endl;
    cout<<(*p)++<<endl;
    cout<<i<<endl;

    int *z;
    cout<<z<<endl;
    cout<<*z++<<endl;
    cout<<*z<<endl;
    return 0;
}