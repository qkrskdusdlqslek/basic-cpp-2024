/*#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)    // �̴ϼȶ�����
	{
		cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;         // num�� ����, this�� �����ϰ� �ִ� ���� �ڱ��ڽ��� �ּҰ�-> *this :��ü �ڱ��ڽ� 
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;       // this �ȿ� ����ִ� ������(num) �ް� ����.
	}
};

int main(void)
{                                    // obj��� ��ü �ϳ� ����
	SelfRef obj(3);                //obj��� SelfRef��ü�� 3�̶�� ���� �Է¹޾�..
	SelfRef &ref = obj.Adder(2);   //obj���� Adder��� �޼��带 ȣ����..

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();    

	return 0;
}
*/