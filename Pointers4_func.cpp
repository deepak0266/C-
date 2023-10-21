#include <iostream>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}
int arry(int arr[],int *brr,int n)
{
    int sum=0;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(brr)<<endl;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    cout<<sum;
}
int update (int *p)
{
    cout<<"x.."<<p<<endl;
    p=p+1;
    cout<<"y.."<<p<<endl;
}
int update1 (int *p)
{
    *p=*p+1;
}
int main()
{
    int arr[]={1,2,334,32,423};
    int brr[]={1,2,334,32,423};
    int value=69;
    int *p = &value;
    cout<<"1.."<<p<<endl;
    cout<<"2.."<<*p<<endl;
    cout<<"3.."<<&p<<endl;
    print(p);
    cout<<"4.."<<update(p)<<endl;
    update(p);
    cout<<"5.."<<p<<endl;
    arry(arr+3,brr,2);
    update1(p);
    cout<<"1.."<<p<<endl;
    cout<<"2.."<<*p<<endl;
    cout<<"3.."<<&p<<endl;
    return 0;
}