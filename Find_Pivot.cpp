#include<iostream>
#include<vector>
using namespace std;
int getpivot (vector <int> &a,int n)
{
    int s=0;
    int e=n-1;
    int mid;
    while(s<e)
    {
        mid=s-s/2+e/2;
        if(a[mid]>=a[0])
            s=mid-1;
        else
            e=mid;
    }
    return s;
}
int main()
{
    vector<int>a;
    a.push_back(10);
    a.push_back(1);
    a.push_back(180);
    a.push_back(107);
    a.push_back(410);
    a.push_back(-10);
    int size=a.size();
    int pivot=getpivot(a,size);
    cout<<pivot;
}