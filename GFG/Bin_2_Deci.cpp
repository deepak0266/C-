#include <iostream>
using namespace std;
int main()
{

	auto number = 0b00011;
	cout << number<<endl;
	int x=number;
	cout << (x & (1<<2)!=0);
	return 0;

}
