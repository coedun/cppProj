#include <iostream>

int main() {
	using namespace std;
	int x = 10;

	int& ref = x;
	ref = 6;
	cout << "x:" << x << endl;
	cout << "ref: " << ref << endl;
	return 0;
}