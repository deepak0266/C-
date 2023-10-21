#include <iostream>
using namespace std;
int ternary(int n)
{
    int a=88;
    int b=99;
    int pos_ans=(b-a==n)?true:false;
    return pos_ans;
}
int main()
{
    cout<<ternary(12);
    return 0;
}