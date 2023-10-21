#include <iostream>
using namespace std;
bool issorted(int arr[],int size)
{
    if(size==0||size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    int ans=issorted(arr+1,size-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<issorted(arr,n);
    
    return 0;
}