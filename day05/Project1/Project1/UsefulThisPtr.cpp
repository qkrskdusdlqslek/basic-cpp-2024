/*#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;           // ù ��° ������ �����ϴ� ��� ����
	int num2;           // �� ��° ������ �����ϴ� ��� ����
public:
    // ������: �� ���� ������ �޾� ��� ������ �ʱ�ȭ
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;      // this-> num1�� ���޹��� num1�� ���� ����ִ� 
		this->num2 = num2;
	}
	/*
	TwoNumber(int num1, int num2)
		: num1(num1), num2(num2)
	{
		// empty
	}
	*/
/*	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();

	return 0;
}
*/
/* �߰� ���� ��
1. TwoNumber Ŭ����
=> num1�� num2��� �� ���� ��� ������ ������ ����.

2. ������ TwoNumber(int num1, int num2)
=> �� ���� ���ڸ� �޾Ƽ� num1�� num2 ��� ������ ���� �Ҵ�.

3. ShowTwoNumber() �Լ�
=> ��ü�� num1�� num2 ��� ������ ���.
*/