#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	cout << "�ٲٱ� ��" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	a = b;
	b = a;

	cout << "�ٲ� ��" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}