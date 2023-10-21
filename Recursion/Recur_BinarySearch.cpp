#include <iostream>
#include<algorithm>
using namespace std;
#define Target 8
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int Binarysearch(int arr[], int first, int last, int target)
{
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
    print(arr, size);
    int ans = Binarysearch(arr, 0, size - 1, Target);
    if (ans)
        cout << "Target " << Target << " is found in the array at the index "<<ans;
    else
        cout << "Target " << Target << " is not found in the array";

    return 0;
}