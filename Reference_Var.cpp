#include <iostream>
using namespace std;
void update1(int n)
{
    n++;
}
void update2(int &n)
{
    n++;
}
int main()
{
    int n=9;
    cout<<"Value before update1: "<<n<<endl;
    update1(n);
    cout<<"Value After update1: "<<n<<endl;
    cout<<"Value before update2: "<<n<<endl;
    update2(n);
    cout<<"Value After update2: "<<n<<endl;
    
    return 0;
}