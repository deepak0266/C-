#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string name :: ";
    getline(cin,s1);
    cout<<"Then find the reverse of string:: ";
    int rev=s1.length();
    int s=0;
    int e=rev-1;
    while(s<e)
    {
        swap(s1[s++],s1[e--]);
    }
    cout<<s1;
}