#include <iostream>

int main() {
	using namespace std;
	//std::cout << "Hello " << "C++" << std::endl;
	cout << "HelloWorld\n" << 45 << " " << 8.2f << endl;
	int age;
	cout << "Tell me your age: ";
	cin >> age;
	cout << "Your age is: " << age << endl;
	char buff[512];
	cout << "What's your name? ";
	cin >> buff;
	cout << "Your name is : " << buff << endl;
	return 0;
}