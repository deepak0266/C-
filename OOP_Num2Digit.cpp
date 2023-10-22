#include <iostream>
using namespace std;

class Num2digit
{
    private:
        string arr[10];
    public:
        Num2digit()
        {
            arr[0] = "Zero";
            arr[1] = "One";
            arr[2] = "Two";
            arr[3] = "Three";
            arr[4] = "Four";
            arr[5] = "Five";
            arr[6] = "Six";
            arr[7] = "Seven";
            arr[8] = "Eight";
            arr[9] = "Nine";
        }
        void saydigit(int& n)
        {
            if(n<0)
            {
                cout<<"Negative"<<" ";
                n=-n;
            }
            if (n==0)
                return;
            int digit= n%10;
            n=n/10;
            saydigit(n);
            cout<<arr[digit]<<" ";
        }
};
int main()
{
    Num2digit cond;
    int n=-6568;
    cout<<"Enter the number:: "<<n<<endl;
    cond.saydigit(n);    
    return 0;
}