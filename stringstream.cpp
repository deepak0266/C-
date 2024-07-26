#include <iostream>
#include <sstream>

using namespace std;

int main() {
  // Create a stringstream object
  stringstream ss;

  // Insert data into the stringstream
  string name = "Alice";
  int age = 30;
  double height = 1.70;

  ss << name << "+" << age << "+" << height;

  // Extract data from the stringstream
  string extractedName;
  int extractedAge;
  double extractedHeight;

  ss >> extractedName >> extractedAge >> extractedHeight;

  // Print the extracted data
  cout << "Name: " << extractedName << endl;
  cout << "Age: " << extractedAge << endl;
  cout << "Height: " << extractedHeight << endl;

  return 0;
}