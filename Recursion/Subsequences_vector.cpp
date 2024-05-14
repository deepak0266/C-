#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateSubsequences(vector<int>& arr, int index) 
{
    // Base case:
    if (index == arr.size()) 
    {
        return {{}};
    }

    // Recursive call to generate subsequences starting from the next index
    vector<vector<int>> result = generateSubsequences(arr, index + 1);

    // Copy the result to include the current element
    vector<vector<int>> newSubsequences = result;
    for (auto& subsequence : newSubsequences) 
    {
        subsequence.push_back(arr[index]);
    }

    // Merge the original result with the new subsequences
    result.insert(result.end(), newSubsequences.begin(), newSubsequences.end());

    return result;
}

int main() 
{
    vector<int> arr = {4,5,8,7};
    vector<vector<int>> subsequences = generateSubsequences(arr, 0);

    // Printing all the subsequences
    for (const auto& subsequence : subsequences) {
        cout << "[ ";
        for (const auto& num : subsequence) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
