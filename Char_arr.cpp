#include<iostream>
using namespace std;
int main()
{
    char name[10];
    cout<<"Enter the character array:: ";
    cin>>name;
    int count=0;
    int n=sizeof(name);
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
        cout<<"\n"<<count;
        cout<<name[i];
    }

}