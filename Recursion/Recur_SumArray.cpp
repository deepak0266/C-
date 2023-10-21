#include <iostream>
using namespace std;

int sumr (int *arr,int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];
    int remain=sumr(arr+1,n-1);
    int sum =arr[0] +remain;
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