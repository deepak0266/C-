#include <iostream>
using namespace std;
int home(int s,int d)
{
    if (s==d)
    {
        cout<<"Apna Ghar"<<endl;
        return 1 ;
    }
    s++;
    int pahuch=home(s,d);
    cout<<"Source:: "<<s<<" Destination:: "<<d<<endl;
    return pahuch;
}
int main()
{
    cout<<home(1,10);
    
    return 0;
}