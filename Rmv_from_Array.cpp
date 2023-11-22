#include <iostream>
using namespace std;
int rmvELMarray(int arr[],int n,int valuedeletion)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=valuedeletion)
        {
            arr[count++]=arr[i];
        }
    }
    return count;
}
int main()
{
    int arr[]={1,2,6,65,54,6,44,54,1,32,64,51,4,1,8,43,8,4,164};   
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elements of array::"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    int index=rmvELMarray(arr,n,1);
    cout<<"Elements of array after deleting the value::"<<endl;
    for(int i=0;i<index;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    return 0;
}