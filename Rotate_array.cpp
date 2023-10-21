#include <iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int> & vrr,int pos)
{
    int n=vrr.size();
    vector<int> vec(n);
    for(int i=0;i<n;i++)
        vec[(pos+i)%n]=vrr[i];
    
    return vec;
}
int main()
{
    vector<int> vrr={1,2,3,5,-5,6,-2,8,52,5,5,-41,5,-88,45,-5,35,44,85,81,88};
    // int n=sizeof(arr)/sizeof(arr[0]);
    int n=vrr.size();
    int k=7;
    cout<<"Array before Rotation:: "<<endl;
    for(int i=0;i<n;i++)
        cout<<vrr[i]<<" ";
        cout<<endl;
    vrr=rotate(vrr,k);
    cout<<"Rotate the array from position:: "<<k<<endl;
    cout<<"Array after Rotation:: "<<endl;
    for(int i=0;i<n;i++)
        cout<<vrr[i]<<" ";
        cout<<endl;
    
    return 0;
}