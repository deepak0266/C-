#include <iostream>
#include<climits>
using namespace std;
int Merge(int a[],int s,int m,int e)
{
    int n1=m-s+1;
    int n2=e-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i]=a[s+i];
    for(int i=0;i<n2;i++)
        R[i]=a[m+i+1];
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;

    int i=0;
    int j=0;
    for(int k=s;k<=e;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }    
        else
        {
            a[k]=R[j];
            j++;
        }
    }

}
int MergeSort(int *a,int s,int e)
{
    if(s<e)
    {
        int m=s+(e-s)/2;
        MergeSort(a,s,m);
        MergeSort(a,m+1,e);
        Merge(a,s,m,e);
    }
}
int main()
{
    int a[]={1,2,12,2,-888,88,89,-4,8,12,-8,21,32};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Array before Sorted::"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    MergeSort(a,0,n-1);
     cout<<"Array After Sorted::"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    return 0;
}