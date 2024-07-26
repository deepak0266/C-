#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> char_to_word;
        map<string, char> word_to_char;
        
        stringstream ss(s);
        string word;
        int index = 0;
        
        // Splitting s into words using stringstream
        while (ss >> word) {
            if (index >= pattern.size()) {
                return false; // More words in s than characters in pattern
            }
            
            char c = pattern[index];
            
            // Check if current character in pattern already mapped
            if (char_to_word.find(c) != char_to_word.end()) {
                if (char_to_word[c] != word) {
                    return false; // Conflict in mapping
                }
            } else {
                char_to_word[c] = word;
            }
            
            // Check if current word in s already mapped
            if (word_to_char.find(word) != word_to_char.end()) {
                if (word_to_char[word] != c) {
                    return false; // Conflict in mapping
                }
            } else {
                word_to_char[word] = c;
            }
            
            index++;
        }
        
        // Check if both mappings have the same size
        return index == pattern.size();
    }
};


int main() {
    Solution solution;
    string pattern = "abba";
    string s = "dog cat cat dog";
    
    bool result = solution.wordPattern(pattern, s);
    
    if (result) {
        cout << "Pattern matches the string." << endl;
    } else {
        cout << "Pattern does not match the string." << endl;
    }
    
    return 0;
}
