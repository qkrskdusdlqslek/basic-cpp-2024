#include <iostream>

class MyClass
{
	int* ptr;
public:
	MyClass(int* p) : ptr(new int[100])
		{
			printf("������ ȣ��\n");
		}

	~MyClass()
		{
				printf("�Ҹ��� ȣ��\n");
			delete[] ptr;
		}
};

int main()
{
	MyClass* m1 = new MyClass(10);
	std::cout << "==========================================" << std::endl;
	std::unique_ptr<MyClass> m2(new MyClass(20));

	return 0;
}