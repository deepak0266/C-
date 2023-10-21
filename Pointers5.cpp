#include <iostream>
using namespace std;
int main()
{
    int g=5;
    int *p=&g;
    int **q=&p;
    int ***r=&q;
    cout<<endl;;    
    // cout<<"1.."<<g<<endl;
    // cout<<"2.."<<&g<<endl;
    // cout<<"3.."<<p<<endl;
    // cout<<"4.."<<*p<<endl;
    // cout<<"5.."<<&p<<endl;
    // cout<<"6.."<<q<<endl;
    // cout<<"7.."<<*q<<endl;
    // cout<<"8.."<<&q<<endl;
    // cout<<"8.."<<*&q<<endl;
    // cout<<"8.."<<&*q<<endl;
    // cout<<"9.."<<**q<<endl;
    cout<<"10.."<<r<<endl;
    cout<<"11.."<<*r<<endl;
    cout<<"12.."<<&r<<endl;
    cout<<"13.."<<**r<<endl;
    cout<<"14.."<<***r<<endl;
    cout<<"14.."<<&***r<<endl;
    cout<<"15.."<<&**r<<endl;
    cout<<"16.."<<&*r<<endl;
    cout<<"17.."<<*&r<<endl;
    return 0;
}
