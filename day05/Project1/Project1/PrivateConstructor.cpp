/*#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}                      // �̴ϼȶ�����
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);            // �� ���� �Ұ�
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}      //25���� ������ ���� -> �̱�������(��ü�� �� �ϳ��� �ʿ��� ��)
};

int main(void)
{
	AAA base;
	base.ShowNum();

	// AAA a(10);       *���� : private���� �Ǿ��ֱ� ������ �ܺο��� ��ü�� ������ �� ����!

	AAA& obj1 = base.CreateInitObj(3);      // AAAŸ�Կ� �������� ���� | CreateInitObj ����Լ��� ȣ��
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);     // obj1�� obj2�� �ٸ���ü
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
	return 0;
}
*/