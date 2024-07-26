#include<iostream>
using namespace std;
class random
{
    public:
    int data=9;
    void rand1(int data)
    {
        this->data=data;
        cout<<"this->data=data:: "<<data<<endl;;
    }
    void rand2(int data)
    {
        data=this->data;
        cout<<"data=this->data:: "<<data;
    }
};
int main()
{
    random ob;
    ob.rand1(55);
    ob.rand2(55);
}