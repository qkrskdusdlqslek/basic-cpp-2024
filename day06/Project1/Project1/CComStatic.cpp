#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;              //------> 1���� ������
	//int cnt = 0;              //-------> 1�� ��� ����
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++) {       // �ݺ����� for�� -> 10�� ���� / Counter 10�� ȣ�� ��..
		Counter();
	}
	return 0;
}