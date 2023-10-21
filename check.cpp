#include <iostream>
using namespace std;

void Num2digit(string arr[], long long& n) {
    if (n < 0) {
        cout << "Negative ";
        n = -n;
    }
    if (n == 0) {
        return;
    }

    long long crore = n / 10000000;  // Calculate crore part
    n = n % 10000000;               // Calculate the remaining part

    if (crore > 0) {
        Num2digit(arr, crore);
        cout << "Crore ";
    }

    int digit = n % 10;
    n = n / 10;

    Num2digit(arr, n);
    if (digit != 0) {
        cout << arr[digit] << " ";
        if (n == 0) {
            cout << " ";
        } else if (n % 10 == 0) {
            cout << "Hundred ";
        } else {
            cout << " ";
        }
    }
}

int main() {
    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    long long n = 789123456;  // Replace with your desired number, e.g., 789123456 for "Seven Hundred Eighty Nine Crore Twelve Lakh Thirty Four Thousand Four Hundred Fifty Six"
    
    cout << "Enter the number: " << n << endl;
    Num2digit(arr, n);

    return 0;
}
