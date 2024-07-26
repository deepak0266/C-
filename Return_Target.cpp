#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int Position(vector<int>&vec,int target)
{
    int s=0;
    int e=vec.size()-1;
    int n=e+1;
    int mid;
    if(vec[e]<target)
    return n;
    while(s<e)
    {
        mid=(s+e)/2;
        if(vec[mid]==target)
            return mid;

        else if(vec[mid]>target)
            e=mid;

        else
            s=mid+1;
    }
    return s;

}
int main()
{
    vector<int> vec={1,2,3,8,9,0,54354,4,5,17,28};
    cout<<Position(vec,17);
    return 0;
}