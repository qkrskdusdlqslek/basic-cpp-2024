/*
  C++ Ÿ���� ����ü : ����ü ����� ��������� ����Լ��� ������.

#include <iostream>                                      // C++ ����

typedef struct human {                                // human ����ü : struct(����ü �̸�) -> ���� ���� ����� ���� �ڷ���
	char name[20];                                   // ���ڸ� ��Ÿ���� Ÿ�� : char / �Ӽ���� �������(name, age, job)
	int age;
	char job[20];

	void showHuman()                          // ��ɴ�� ����Լ�
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}

}Human;                                             // ������ human ����ü�� Human���� ����ϰڴ�.

int main()
{
	int a;
	human h1 = { "ȫ�浿", 50, "����" };             // Human Ÿ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
	h1.showHuman();

	return 0;
}
*/