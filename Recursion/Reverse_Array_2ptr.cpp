#include <iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int reverseArray(int *arr,int first,int last)
{
    cout<<endl;
    print(arr,12);

    if(first>last)
        return 0;
    if(first<last)
        swap(arr[first],arr[last]);
    return reverseArray(arr,first+1,last-1);
}
int main()
{
       int arr[]={1,2,3,55,4,6,8,88,7,77,5,24};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the array element::"<<endl;
    print(arr,size);
    reverseArray(arr,0,size-1);
    print(arr,size);
    
    return 0;
}