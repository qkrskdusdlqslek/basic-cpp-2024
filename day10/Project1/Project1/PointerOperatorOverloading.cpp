#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n) : num(n) { }
	void ShowData() { cout << num << endl; }

	Number* operator->()
	{
		return this;        // �ڱ��ڽ���(��ü) ������ ����
	}

	Number& operator*()    // ������ ���� ����
	{
		return *this;      
	}
};

int main(void)
{
	Number num(20);
	num.ShowData();

	(*num) = 30;            //  �����͸� ���� �������� -> �ڱ��ڽſ� 30 ���� �������
	num->ShowData();        // �����͸� ���� ����Լ� ����
	(*num).ShowData();      // 17�� ����

	return 0;
}