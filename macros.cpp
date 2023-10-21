#include <iostream>
using namespace std;
# define pi 3.14
double area(int n)
{
    double area=pi*n*n/2;
    return area;
}
int main()
{
    cout<<"Area of CIRCLE :: "<<area(5)<<endl;
    return 0;
}