#include <iostream>
#include <cstring>
using namespace std;

class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		printf("������ ȣ��\n");
		arr = new int[len];      // ���Ӱ� �迭 Ÿ������ int�� ���޹��� ũ�⸸ŭ �ּҰ��� �����ؼ� �ް� �ִ�.
	}
	int& operator[] (int idx)
	{
		printf("[]�������Լ� ȣ��\n");
		if (idx<0 || idx>=arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			BoundCheckIntArray::~BoundCheckIntArray();
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray()
	{
		printf("�Ҹ��� ȣ��=\n");
		delete []arr;
	}
};

int main(void)
{
	BoundCheckIntArray arr(5);          
	for (int i = 0; i < 5; i++)      // 0������� 4������� �� 5�� ��
		arr[i] = (i + 1) * 11;

	for (int i = 0; i < 6; i++)      // 6�� ���� ��
		cout << arr[i] << endl;      

	return 0;
}
