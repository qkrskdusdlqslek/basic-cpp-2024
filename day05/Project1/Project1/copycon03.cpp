/*#include <iostream>
using namespace std;

class AA {
	int a;
	int b;
public:
	AA(int a, int b) {
		this->a = a;
		this->b = b;
	}
	AA(const AA& copy) {
		this->a = copy.a;
		this->b = copy.b;
		cout << "��������� ȣ��" << endl;
	}

	

	void AAInfo() {
		cout << a << " " << b << endl;
	}
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();

	AA obj2(obj1);
	obj2.AAInfo();

	return 0;
}
*/