/*#include <iostream>
using namespace std;

class SoSimple                     //SoSimple Ŭ���� ��� ���� �ϳ� ������ ����
{
private: 
	int num;                      // ��������� 3��- ������ 1, �Ҹ��� 2
public:
	SoSimple(int n) : num(n)                           // �Է»�����
	{
		cout << "New Object: " << this << endl;        // this�� ��ü �ڱ��ڽ��� ����Ű�� ������ --> ��ü obj�ּ� (31�� ����)
	}
	SoSimple(const SoSimple& copy) : num(copy.num)     //���������
	{
		cout << "New Copy obj: " << this << endl;     // �ӽð�ü �ּ�
	}
	~SoSimple()                                       // �Ҹ��� ȣ��
	{ 
		cout << "Destroy obj: " << this << endl;     // �� ��ü�� �Ҹ�Ǿ������� �� �� ���� -->��ü ob�ּ�(32�� ����)
		                                             // ��ü ob �Ҹ� & �ӽð�ü �Ҹ�
	}
};

SoSimple SimpleFuncObj(SoSimple ob)                  // ���_SimpleFuncObj �Լ�_SoSimple ob �Է� ������..
                                                     // obj�� �����ؼ� ob�� ���� 
{
	cout << "Parm ADR: " << &ob << endl;             // &: �ּ� ������ (���� �����ڴ� ������ �� ���, but ����� �����ϴ� �κ�X)
	                                                 // ��ü ob �ּҸ� ���ϴ� �ڵ�
	return ob;                                       // 23�࿡ �ִ� ob 
}

int main(void)
{
	SoSimple obj(7);         //SoSimple Ÿ���� obj��� ��ü ����, 7�̶�� �Է°��� ȣ��
	SimpleFuncObj(obj);      

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);     // �����ʿ� �ִ� ���� ���ʿ� ������� , �ӽð�ü �ּ� ����
	cout << "Return Obj " << &tempRef << endl;    // �ּ� ������(tempRef�� �ּҸ� �˾ƺ��� ����), �ӽð�ü �ּ� ����

	return 0;
}
*/