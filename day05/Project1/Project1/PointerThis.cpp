/*#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int num) //: num(n)   �̴ϼȶ�����
	{
		this->num = num;
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;   //this�� ��ü �ڱ��ڽ��� ����Ŵ
	}
	void ShowSimpleData()          
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;   //this�� ���� ��ü �ڱ��ڽ��� �ּҸ� �����ͷ� ����Ű�� ����
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
};
*/