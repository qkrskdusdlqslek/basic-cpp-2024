/*#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;                  // const �Լ��� ���� ���ܸ� �д�!
public:
	SoSimple(int n1, int n2)          // ������
		: num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const     // �Լ��� constȭ ��Ű�� �ȿ� �ִ� ���� ����X
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const        // �� ����X
	{
		num2 = num1;               // num2�� �� ����ǰ� ����.. -> mutable Ű���尡 �־ ����
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}
*/