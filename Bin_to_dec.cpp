#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int convertToDecimal(string bin) {
    int decimal = 0;
    int binaryBase = 2;
    
    for (int i = bin.length() - 1, j = 0; i >= 0; i--, j++) {
        if (bin[i] == '1') {
            decimal += pow(binaryBase, j);
        }
    }
    
    return decimal;
}

int main() {
    string binaryStr;
    cout << "Enter a binary number: ";
    cin >> binaryStr;
    
    int decimalValue = convertToDecimal(binaryStr);
    
    cout << "Conversion of binary number into decimal: " << decimalValue << endl;
    
    return 0;
}
