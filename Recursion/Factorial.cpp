#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;

    int factorial=n*fact(n-1);
    
        cout<<"2^"<<n<<" = "<<factorial<<endl;

    return factorial;
}
int main()
{
    cout<<fact(7);
    return 0;
}