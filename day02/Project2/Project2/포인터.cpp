#include <iostream>
using namespace std;

int main()
{
	const int num = 10;            // num ������ ���ȭ��Ų��.
    // num = 100;                 // num�� ����̹Ƿ� ������ �� ����.

	int num1 = 10;
	int *pnum1;                  // �����ͺ��� ����: ������(�ּ�)���� pnum1 ���� (*: �׳� �����ͺ����Դϴٸ� �˷��ִ� ��ȣ, �ǹ� ����)
	pnum1 = &num1;              // ���� num1�� �ּҸ� �����ͺ��� pnum1�� �����Ѵ�.(&: �ּ� ������)


	cout << "num�� ����� ��: " << num << endl;
	cout << "num1�� ����� ��: " << num1 << endl;
	cout << "num1�� �ּҰ�: "<< & num1 << endl;
	cout << "pnum1�� ����� ��: " << pnum1 << endl;
	cout << "Pnum1�� ����� ���� ������: " << *pnum1 << endl;     //*: ������(�����͸� ��Ÿ��)

	return 0;
}