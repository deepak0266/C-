#include <iostream>
using namespace std;
void optBS(int *a,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;   
            }
            
        }
        if(flag!=1)
            break;
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
    optBS(a,n);
     cout<<"Array After Sorted::"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;  

    cout<<sizeof(optBS(a,n))<<endl;
    
    return 0;
}