#include <iostream>
#include<algorithm>
using namespace std;
int findunique(int *arr,int& size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={1,2,5,7,8,7,5,2,2,1,3,8,8,3}  ;
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<"The given array :"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
        cout<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    int ans=findunique(arr,n);
    cout<<"The Unique element :: "<<ans;
    return 0;
}