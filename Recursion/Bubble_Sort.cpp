#include <iostream>
using namespace std;
void Bubblesort(int *a,int n)
{
    if(n==0||n==1)
    return ;
    
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);  
        }           
    }
    Bubblesort(a,n-1);
}
int main()
{
      int a[]={1,2,12,2,-888,88,89,-4,8,12,-8,21,32};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Array before Sorted::"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    Bubblesort(a,n);
     cout<<"Array After Sorted::"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;      
    return 0;
}