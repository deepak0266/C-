#include <iostream>
using namespace std;
# define target 8
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int  linearsearch(int *arr,int n, int Target)
{
    if(n==0)
        return false;
    if(arr[0]==Target)
        return true;
    else
    {

        int remain=linearsearch(arr+1,n-1,Target);
        return remain;
    }
}
int main()
{
    
    int arr[]={1,2,3,55,4,6,8,88,7,77,5,24};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the array element::"<<endl;
    print(arr,size);
    
    int ans=linearsearch(arr,size,target);
    if(ans)
        cout<<"Target "<<target<<" is found in the array";
    else
       cout<<"Target "<<target<<" is not found in the array";

    return 0;
}