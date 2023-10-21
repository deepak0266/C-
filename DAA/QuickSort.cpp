#include <iostream>
using namespace std;
int partition(int *arr,int start,int end)
{
    int x=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++)
    {
        if(arr[j]<=x)
        {   i++;
            swap(arr[i],arr[j]);
        }
    }
    swap((i+1)[arr],end[arr]);
    return i+1;
}
int quicksort(int *arr,int start,int end)
{
    if(start<end)
    {
        int q=partition(arr,start,end);
        quicksort(arr,start,q-1);
        quicksort(arr,q+1,end);
    }
}
int main()
{
    int arr[]={1,2,-8,5,1,5,-22,1,5,8,9,7,5,12,-88,0,99};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements before Selection Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    quicksort(arr,0,n-1) ;
    cout<<"Elements After Selection Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    
    
    return 0;
}