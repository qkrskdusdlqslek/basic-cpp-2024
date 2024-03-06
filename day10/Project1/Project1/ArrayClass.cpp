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
		printf("생성자 호출\n");
		arr = new int[len];      // 새롭게 배열 타입으로 int형 전달받은 크기만큼 주소값을 리턴해서 받고 있다.
	}
	int& operator[] (int idx)
	{
		printf("[]연산자함수 호출\n");
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
		printf("소멸자 호출=\n");
		delete []arr;
	}
};

int main(void)
{
	BoundCheckIntArray arr(5);          
	for (int i = 0; i < 5; i++)      // 0번방부터 4번방까지 총 5개 방
		arr[i] = (i + 1) * 11;

	for (int i = 0; i < 6; i++)      // 6번 실행 됨
		cout << arr[i] << endl;      

	return 0;
}
