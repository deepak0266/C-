#include <iostream>
using namespace std;
int maxheapify(int *arr,int n,int i)
{
    int largest =i;
    int left=2*i+1;
    int right=2*i+2;
    //If left child bada ho root se
    if(left<n && arr[left]<arr[largest])
        largest=left;
    //If right child bada ho root se
    if(right<n && arr[right]<arr[largest])
        largest=right;
    //Root na bada ho kisi se
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        maxheapify(arr,n,largest);
    }
}
int buildmaxhaep(int *Arr)
{

}
int heapsort(int *Arr,int n,int )
{


}
int main()
{
    
    int arr[]={1,2,-8,5,1,5,-22,1,5,8,9,7,5,12,-88,0,99};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements before Selection Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    heapsort(arr,0,n-1) ;
    cout<<"Elements After Selection Sort:: "<<endl;
    for(int i=0;i<n;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
        cout<<sizeof(maxheapify(arr,n,7))<<endl;

    return 0;
}