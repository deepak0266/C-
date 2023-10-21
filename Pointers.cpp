#include<iostream>
using namespace std;
int main()
{
    int n=9;
    int *ntr=nullptr;
    ntr=&n;
    cout<<sizeof(ntr)<<endl;
    cout<<sizeof(*ntr)<<endl;
    cout<<sizeof(&ntr)<<endl;
    cout<<"Value of num:: "<<n<<endl;
    cout<<"Add. of num:: "<<&n<<endl;
    cout<<"Value of num1:: "<<ntr<<endl;
    cout<<"Value of num:2: "<<*ntr<<endl;
}