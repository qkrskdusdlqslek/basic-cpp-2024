/*#include <iostream>
using namespace std;

class SoSimple
{
public:                           // ���������� public
	static int simObjCnt;        // static ������� ����(Ŭ���� ���--> ��ü ��� ���� ����), static�� ������ ��ü�� �����ؾ� ��
public:                          // ���ʿ������� ������ �Լ��� ������ �������� �����ϱ⵵ ��
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;       // static ������� �ʱ�ȭ

int main(void)
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;      // Ŭ���� �̸����� static ����� ���ٰ���
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "���� SoSimple ��ü" << endl;

	return 0;
}
*/