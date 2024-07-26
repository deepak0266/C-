#include <iostream>
#include <map>
using namespace std;
int main() 
{
    // 1. Constructors
    map<int, string> m1; // Default constructor
    map<int, string> m2{{1, "one"}, {2, "two"}}; // Initializer list constructor

    // 2. Element Access
    m1[3] = "three"; // Insert or access element with key 3
    m1[4] = "four";  // Insert or access element with key 4

    // Access with at(), throws out_of_range if key doesn't exist
    try {
        string val = m1.at(3);
        cout << "Value at key 3: " << val << endl;
    } catch (const out_of_range& e) {
        cout << "Key not found" << endl;
    }

    // 3. Iterators
    cout << "Elements in map:" << endl;
    for (auto it = m1.begin(); it != m1.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // Reverse iterators
    cout << "Elements in reverse order:" << endl;
    for (auto rit = m1.rbegin(); rit != m1.rend(); ++rit) {
        cout << rit->first << ": " << rit->second << endl;
    }

    // 4. Capacity
    cout << "Map is " << (m1.empty() ? "empty" : "not empty") << endl;
    cout << "Map size: " << m1.size() << endl;

    // 5. Modifiers
    // Insert elements
    m1.insert({5, "five"});
    m1.insert(pair<int, string>(6, "six"));
    m1.insert(make_pair(7, "seven"));

    // Erase elements
    m1.erase(3); // Erase by key
    auto it = m1.find(4);
    if (it != m1.end()) {
        m1.erase(it); // Erase by iterator
    }

    // Clear all elements
    m1.clear();
    cout << "Map size after clear: " << m1.size() << endl;

    // 6. Lookup
    m1.insert({1, "one"});
    m1.insert({2, "two"});
    m1.insert({3, "three"});

    // Count elements with specific key
    cout << "Count of key 1: " << m1.count(1) << endl;

    // Find elements
    auto find_it = m1.find(2);
    if (find_it != m1.end()) {
        cout << "Found key 2 with value: " << find_it->second << endl;
    }

    // Lower and upper bounds
    auto lb = m1.lower_bound(2);
    if (lb != m1.end()) {
        cout << "Lower bound of 2: " << lb->first << ": " << lb->second << endl;
    }

    auto ub = m1.upper_bound(2);
    if (ub != m1.end()) {
        cout << "Upper bound of 2: " << ub->first << ": " << ub->second << endl;
    }

    // Equal range
    auto range = m1.equal_range(2);
    cout << "Equal range of 2:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    
    return 0;
}
