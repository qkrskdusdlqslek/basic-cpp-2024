/*#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "SoSimple(int n) constructor ȣ��" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)                    // SoSimple�� �����ϰ� �ִ� copy = obj
	{
		cout << "called SoSimple(const SoSimple& copy)" << endl;     // ��������� ȣ��
	}

	void ShowData()                            // ����Լ� : ��ü ���� �Ŀ� ��� ����
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)              // �����Լ� : �Ҽ� ����, �ƹ��� ���� ����(��ü ���� �ʿ� ����)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj);                    // obj�� �μ�
	cout << "�Լ�ȣ�� ��" << endl;

	return 0;
}
*/