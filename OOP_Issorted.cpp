#include <iostream>
using namespace std;
class Issorted
{
    private:
        int arr[10];
    public: 
    // int size= sizeof(arr)/sizeof(arr[0]);
        Issorted()
        {
            arr[0]=1;
            arr[1]=11;
            arr[2]=21;
            arr[3]=111;
            arr[4]=121;
            arr[5]=211;
            arr[6]=311;
            arr[7]=441;
            arr[8]=551;
            arr[9]=661;
        }
        bool check(int n)
        {
            if(n==0||n==1)
                return true;
            if(arr[0]>arr[1])
                return false;
            else
            {
                int ans=check(n-1);
                return true;
            }
        }
};
int main()
{
    Issorted what;
    what.check(10);
    
    return 0;
}