#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	cout << "바꾸기 전" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	a = b;
	b = a;

	cout << "바뀐 후" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}