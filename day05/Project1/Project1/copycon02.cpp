/*#include <iostream>
using namespace std;

class AA {
	int a;
	int b;
public:
	AA(int a, int b) {
		this->a = a;    //�ŰԺ��� �̸��� ���� �� this �����͸� ���
		this->b = b;
	}
	void AAInfo() {
		cout << a << " "<< b << endl;

	}
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();
	                  // ���� �����ڸ� �������� ������, ����Ʈ ���� �����ڰ� �ڵ����� ���Ե�.
	AA obj2(obj1);    // �տ� �ִ� obj1�� ���� -> ��������� 
	obj2.AAInfo();

	return 0;
}
*/