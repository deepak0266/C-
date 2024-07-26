#include<iostream>
using namespace std;
union student
{
    int name[20];
    char str[10];
};
enum year
{
    jan,feb,mar
};
int main()
{
    year mon;
    mon=jan;
    student std;
    cout<<std.name[2]<<endl;;
    // const int x;
    // cout<<"The value of x"<<x<<endl;
}