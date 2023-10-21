#include <iostream>
using namespace std;
int insertion(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int x=i[arr];
        int j=i-1;
        while(j>=0&&arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    return *arr;
}
int main()
{
    int arr[]={1,2,-8,5,1,5,-22,1,5,8,9,7,5,12,-88};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements before Insertion Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    insertion(arr,n) ;
    cout<<"Elements After Insertion Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    return 0;
}
