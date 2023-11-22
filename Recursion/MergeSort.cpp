#include <iostream>
#include <climits>
using namespace std;
void merge(int arr[],int first,int mid,int last)
{
    int left=mid-first+1;
    int right=last - mid;
    int L[left],R[right];
    for(int i=0;i<left;i++)
    {
        L[i]=arr[i+first];
    }
    for(int i=0;i<left;i++)
    {
        R[i]=arr[i+mid+1];
    }
    int i=0;
    int j=0;
    int k=first;
    while(i<left && j<right)
    {
        if(L[i]<R[i])
        {
            arr[i++]=L[k];
        }
        else
        {
            arr[j++]=R[k];
        }
        k++;
    }
    while(i<left)
    {
        arr[i++]=L[k++];
    }
    while(j<right)
    {
        arr[j++]=R[k++];
    }
}
void mergesort(int arr[],int start,int last)
{
    if(start>last)
    return ;
    int mid=start-(start-last)/2;
    mergesort(arr,start,mid-1);
    mergesort(arr,mid+1,last);
    merge(arr,start,mid,last);
    
}
int main()
{
     int a[]={1,2,12,2,-888,88,89,-4,8,12,-8,21,32};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Array before Sorted::"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    mergesort(a,0,n-1);
    cout<<"Array After Sorted::"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
    
    return 0;
}