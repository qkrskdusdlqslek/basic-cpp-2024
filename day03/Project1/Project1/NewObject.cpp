/*#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple                                                   // class�� �� �ϳ��� Ÿ��
{
public:
	Simple()                                                  // Simple() = �Լ�, ������(Ŭ���� �̸��� ���� �ż���)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;                                // new �����ڸ� ���� ��ü����

	cout << "case2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);      // heap������ �޸� �Ҵ�/ malloc �ڿ� ũ�⸦ ����� ��

	cout << endl << "end of main" << endl;
	delete sp1;                                             // ��ü�� ��ȯ�Ѵ�
	free(sp2);
	return 0;
}
*/