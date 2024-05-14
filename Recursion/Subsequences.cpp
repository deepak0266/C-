#include <iostream>
#include <vector>
using namespace std;

void generateSubsequences(vector<int>& arr, vector<int>& sub, int index) 
{
    // Base case: If the index reaches the end of the array, print the subsequence
    if (index == arr.size()) 
    {
        cout << "[ ";
        for (int i = 0; i < sub.size(); i++) 
        {
            cout << sub[i] << " ";
        }
        cout << "]" << endl;
        return;
    }

    // Two cases for each element of the array:
    // Include the current element
    sub.push_back(arr[index]);
    generateSubsequences(arr, sub, index + 1);

    // Exclude the current element
    sub.pop_back();
    generateSubsequences(arr, sub, index + 1);
}

int main() {
    vector<int> arr = {4,5,8,7};
    vector<int> sub;
    generateSubsequences(arr, sub, 0);
    return 0;
}
