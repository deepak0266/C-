#include <iostream>
using namespace std;
# define target 8
# define Initial_index 0
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int  linearsearch(int *arr,int n, int Target,int index)
{
    if(n==index)
        return false;
    if(arr[index]==Target)
        return index;
    else
    {
        int remain=linearsearch(arr,n,Target,index+1);
        return remain;
    }
}
int main()
{
    
    int arr[]={1,2,3,55,4,6,8,88,7,77,5,24};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the array element::"<<endl;
    print(arr,size);
    
    int ans=linearsearch(arr,size,target,Initial_index);
    if(ans)
        cout<<"Target "<<target<<" is found in the array at the index "<<ans;
    else
       cout<<"Target "<<target<<" is not found in the array";

    return 0;
}