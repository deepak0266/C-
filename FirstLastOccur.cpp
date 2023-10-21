#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,6,6,6,6,6,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int first=-1;
    int target=6;
    int last=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=target)
            continue;
        if(first==-1)
        first=i;

        last=i;

    }
        cout<<"First Occurance of array of target"<<target<<" :: "<<first<<endl;;
        cout<<"Last Occurance of array of target"<<target<<" :: "<<last<<endl;
    
    return 0;
}