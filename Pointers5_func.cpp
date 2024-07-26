#include <iostream>
using namespace std;
int update_No_ptr(int **p)
{
    p=p+1;
}
int update_1_ptr(int **p)
{
    *p=*p+1;
}
int update_2_ptr(int **p)
{
    **p=**p+1;
}
int main()
{
    int i=5;
    int *pt=&i;
    int **q=&pt;
    cout<<"i:: "<<i<<endl;
    cout<<"&i:: "<<&i<<endl;
    cout<<"pt:: "<<pt<<endl;
    cout<<"&pt:: "<<&pt<<endl;
    cout<<"*pt:: "<<*pt<<endl;
    cout<<"q:: "<<q<<endl;
    cout<<"&q:: "<<&q<<endl;
    cout<<"*q:: "<<*q<<endl;
    cout<<"**q:: "<<**q<<endl;
    cout<<endl<<endl;


    cout<<"Before q:: "<<q<<endl;
    cout<<"Before &q:: "<<&q<<endl;
    cout<<"Before *q:: "<<*q<<endl;
    cout<<"Before &*q:: "<<&*q<<endl;
    cout<<"Before **q:: "<<**q<<endl;
    update_No_ptr(q);
    cout<<"After q:: "<<q<<endl;
    cout<<"After &q:: "<<&q<<endl;
    cout<<"After *q:: "<<*q<<endl;
    cout<<"After &*q:: "<<&*q<<endl;
    cout<<"After **q:: "<<**q<<endl<<endl<<endl;

    cout<<"Before q:: "<<q<<endl;
    cout<<"Before &q:: "<<&q<<endl;
    cout<<"Before *q:: "<<*q<<endl;
    cout<<"Before &*q:: "<<&*q<<endl;
    cout<<"Before **q:: "<<**q<<endl;
    update_1_ptr(q);
    cout<<"After q:: "<<q<<endl;
    cout<<"After &q:: "<<&q<<endl;
    cout<<"After *q:: "<<*q<<endl;
    cout<<"After &*q:: "<<&*q<<endl;
    cout<<"After **q:: "<<**q<<endl<<endl<<endl;
    
    
    cout<<"Before q:: "<<q<<endl;
    cout<<"Before &q:: "<<&q<<endl;
    cout<<"Before *q:: "<<*q<<endl;
    cout<<"Before &*q:: "<<&*q<<endl;
    cout<<"Before **q:: "<<**q<<endl;
    update_2_ptr(q);
    cout<<"After q:: "<<q<<endl;
    cout<<"After &q:: "<<&q<<endl;
    cout<<"After *q:: "<<*q<<endl;
    cout<<"After &*q:: "<<&*q<<endl;
    cout<<"After **q:: "<<**q<<endl;
    
    return 0;
}
