#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        return climb(n);
    }

    int climb(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        
        return climb(n - 1) + climb(n - 2);;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways to climb stairs: " << sol.climbStairs(n) << endl;
    return 0;
}
