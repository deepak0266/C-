#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 5, 88, 8, 8, 8, 512, 45, 6, 84, 216, 64, 54, 68, 464, 777, 654, 9};
    int *brr = arr;
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    
    sort(brr, brr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    rotate(brr, brr + 8, brr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int searchValue = 8;

    int *lower = lower_bound(arr, arr + n, searchValue);
    if (lower != arr + n)
    {
        cout << "Lower bound of " << searchValue << " found at index: " << (lower - arr) << endl;
    }
    else
    {
        cout << "Lower bound of " << searchValue << " not found in the array." << endl;
    }
    
    int element = 818;
    bool searched = binary_search(arr, arr + n, element);
    
    if (searched)
        cout << "Searched element: " << element << "Found at index: ";
    else
        cout << "Searched element: " << element << " not Found:";
 
    return 0;
}