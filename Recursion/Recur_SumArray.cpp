#include <iostream>
using namespace std;

int sumr (int *arr,int n)
{
    int sum =0;
    if(n==1)
        return sum;
    sum+=arr[n-1];
    sumr(arr,n-1);
    return sum;
}

int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=sumr(arr,n);
    cout<<ans;
    return 0;
}