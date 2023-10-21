#include <iostream>
using namespace std;
int reverse(int *Arr,int n)
{
    int s=0;int e=n-1;
    while(s<e)
    {
        swap(Arr[s++],Arr[e--]);
    }
    return *Arr;
}
int main()
{
    int arr[]={1,2,3,4,5,5,5,6,6,6,6,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}