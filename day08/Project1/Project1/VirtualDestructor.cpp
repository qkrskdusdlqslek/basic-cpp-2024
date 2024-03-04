#include <iostream>
using namespace std;

class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	virtual ~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};

int main(void)
{
	/*
	��Ӱ��迡 �־ ��ü�����ʹ� �����ؾ� ��!! 
	�θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����Ű�� ���(������) ����!!!
	*/
	First* ptr = new Second("simple", "complex");  // virtual ��� ���ϸ� ��ü ������ Ÿ�Կ� �ִ� �Ҹ��ڸ� ȣ��
	delete ptr;

	return 0;
}