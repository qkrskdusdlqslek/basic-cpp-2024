/*#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)    // ��ü �ڱ��ڽ��� ���� ���·� �ް� ����
	{
		num += n;              // num = num + n;
		return *this;          // this �����͸� ���ؼ� ��ü�� �����ϰ� ����
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;                                           // ��������� ȣ��
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();           // SimpleFuncObj(obj) �ӽ� ��ü ����
	//SoSimple re = SimpleFuncObj(obj);
	obj.ShowData();
	return 0;
}
*/