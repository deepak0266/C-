#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,5,6,8,9,1,4,77};
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*arr+4<<endl;
    int i=4;
    cout<<i[arr]<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*arr)<<endl;
    cout<<sizeof(&arr)<<endl;
    int *p=&arr[0];
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;

    int a[20]={1,23,43,88,2,34,54,3};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    int *r=&a[0];
    cout<<r<<endl;
    cout<<*r<<endl;
    cout<<&r<<endl;

    int n[]={1,88,23,21,65,5};
    char ch[]="absdbf";
    cout<<sizeof(ch)<<endl;
    cout<<ch<<endl;
    cout<<n<<endl;
    return 0;
}