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
    // cout<<endl;
    // print(arr,12);

    if(first>last)
        return 0;
    if(first<last)
        swap(arr[first],arr[last]);
    return reverseArray(arr,first+1,last-1);
}
bool checkpalindrome(int *arr,int first,int last)
{
    if(first>last)
        return true;
    if(arr[first]!=arr[last])
        return false;
    checkpalindrome(arr,first+1,last-1);
    return true;
}
int main()
{
       int arr[]={1,2,3,55,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the array element::"<<endl;
    print(arr,size);
    reverseArray(arr,0,size-1);
    print(arr,size);
     int ans=checkpalindrome(arr,0,size-1);
    if(ans)
        cout<<"The given Array is palindrome";
    else
        cout<<"The given Array is not palindrome";
    return 0;
}