#include <iostream>
using namespace std;
int selection(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int small=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[small]>arr[j])
            small=j;
        }
        if(small!=i)
        swap(arr[i],arr[small]);
    }
}
int main()
{
     int arr[]={1,2,-8,5,1,5,-22,1,5,8,9,7,5,12,-88};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements before Selection Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    selection(arr,n) ;
    cout<<"Elements After Selection Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    
    return 0;
}