#include <iostream>
#include<algorithm>
using namespace std;
#define Target 77
void print(int arr[], int start,int end)
{
    for (int i = start; i < end; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int Binarysearch(int arr[], int first, int last, int target)
{
    cout<<endl;
    print(arr,first,last);
    int mid = first - (first - last) / 2;
    if (first > last)
        return 0;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        Binarysearch(arr, first, mid - 1, target);
    else
    
        Binarysearch(arr, mid + 1, last, target);
}
int main()
{
    int arr[] = {1, 2, 3, 55, 4, 6, 8, 88, 7, 77, 5, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+size);
    cout << "Enter the array element::" << endl;
    print(arr, 0,size-1);
    int ans = Binarysearch(arr, 0, size - 1, Target);
    if (ans)
        cout << "Target " << Target << " is found in the array at the index "<<ans;
    else
        cout << "Target " << Target << " is not found in the array";

    return 0;
}