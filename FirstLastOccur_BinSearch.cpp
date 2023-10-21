#include <iostream>
using namespace std;
int firstoccur(int *arr,int target,int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans;
    while(s<e)
    {
        if(arr[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }

        else if( arr[mid]>target)
            e=mid-1;

        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastoccur(int *arr,int target,int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans;
    while(s<e)
    {
        if(arr[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }

        else if( arr[mid]>target)
            e=mid-1;

        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return mid;
}
int main()
{
    int arr[]={1,2,3,4,5,5,5,6,6,6,6,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<firstoccur(arr,6,n)<<endl;
    cout<<lastoccur(arr,6,n)<<endl;
    
    return 0;
}