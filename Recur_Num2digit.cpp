#include <iostream>
using namespace std;
void Num2digit(string arr[],int& n)
{
    if(n<0)
    {
        cout<<"Negative"<<" ";
        n=-n;    
    }
    if(n==0)
    {
        return ;
    }
    int digit=n%10;
    n=n/10;
    Num2digit(arr,n);
    cout<<arr[digit]<<" ";
}
int main()
{
    string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n=-77789;
    cout<<"Enter the number:: "<<n<<endl;
    Num2digit(arr,n);

    return 0;
}