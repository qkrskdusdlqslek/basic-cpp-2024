#include <iostream>
int Adder(int num1 = 1, int num2 = 2);       // �Լ� ����

int main(void)                               // �Լ� ȣ���� �Ϸ��� �Լ� ������ ���� �ؾ� ��
{
	std::cout << Adder() << std::endl;      // �Լ� ȣ��:Adder() /  �Է°� ���� -> �Ű������� ����Ʈ�� ����� 
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)              // �Լ� ����
{
	return num1 + num2;
}
