/*#include <iostream>
using namespace std;

class MyClass {
	int num;

public:

	MyClass() {                                            // �Է��� ���� ������(default ������)
		cout << "������ ȣ��: MyClass()" << endl;        
		num = 10;
	}
	MyClass(int anum) {                   // ������ �����ε�
		cout << "������ ȣ��: MyClass(int )" << endl;     // �Է��� �ϳ� �ִ� ������
		num = anum;       
	}
	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};

int main()
{
	// MyClass *m = new MyClass();         //heap ������ �����ڸ� �����ϱ� ���ؼ� new Ű���带 �����

	MyClass m1;                            // ��ü�� �����ϴ� �ڵ�, �����ڰ� �ڵ����� ȣ��ȴ�
	m1.MyClassInfo();                     
	MyClass m2(20);
	m2.MyClassInfo();

	// MyClass m2();                      // m2��� �޼��带 ȣ����, �� ���´� �׳� �Լ� ȣ���ϴ� ����

	return 0;
}
*/