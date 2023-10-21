#include<iostream>
using namespace std;
int get_bit(int n,int i)
{
    return n&(1<<i)!=0;
}
int set_bit(int n,int i)
{
    return n|(1<<i);
}
int clear_bit(int n,int i)
{
    return n&~(1<<i);
}
int main()
{
    int n=32;

    
    int i=5;
    cout<<~i<<endl;
    cout<<"The bit position of number "<<n<<" :: "<<get_bit(n,i)<<endl;
    cout<<"The bit position of number "<<n<<" :: "<<clear_bit(n,i)<<endl;
    cout<<"The bit position of number "<<n<<" :: "<<set_bit(n,i)<<endl;
}