/*#include <iostream>
using namespace std;

int simObjCnt = 0;         // ��������(�Ҽ�X, ����X)
int cmxObjCnt = 0;         // �������� (--> ������ ���X)

class SoSimple             // ��ü�� �ϳ� ������ ������..
{
public:
	SoSimple()
	{
		simObjCnt++;        // 1�� ���� ��..
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};

class SoComplex           //��ü�� �ϳ� ������ ������
{
public:
	SoComplex()
	{
		cmxObjCnt++;      // 1�� ���� ��..
		cout << cmxObjCnt << "��° SoSimplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
}
};

int main(void)
{
	SoSimple sim1;       
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();                // �ӽð�ü ����, ������

	return 0;
}
*/