#include <iostream>
#include <vector>
// #include<cmath>
using namespace std;

void sieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries as true. A value in prime[i] will finally
    // be false if i is not a prime, else true.
    vector<bool> prime(n + 1, true);

    // Start with the first prime number, 2
    for (int p = 2; p * p <= (n); p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
            cout << p << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the limit to find prime numbers up to: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are:\n";
    sieveOfEratosthenes(n);

    return 0;
}
