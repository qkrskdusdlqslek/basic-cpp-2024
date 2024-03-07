#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}
	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	/*
	  int a = 10;
	  int b = a;     ������ Ÿ���̶� ����� ���Կ��� �Ͼ �� ����
	  double d = 3.14;
	  a = d;    a�� intŸ��, d�� doubleŸ�� -> Ÿ���� ���� �ٸ�(�������� �ڵ����� ����ȯ ������, But ��Ģ�� ���� Ÿ�Ը�..)
	*/
	Number num;           // num�̶�� ��ü ����
	num = 30;         // 1. num=Number(30); -> 2. num.operator((Number(30)); ,�ӽð�ü�� �����ϰ� �̸� ������� �ϴ� ���Կ����� ȣ��
	num.ShowNumber();

	return 0;
}