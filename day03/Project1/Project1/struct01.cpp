/* 
   C Ÿ���� ����ü : ����ü ����� ��������� ������.

#include <stdio.h>                                      // C������ ��

typedef struct human {                                // human ����ü : struct(����ü �̸�) -> ���� ���� ����� ���� �ڷ���
	char name[20];                                   // ���ڸ� ��Ÿ���� Ÿ�� : char / �Ӽ�; �������(name, age, job)
	int age;
	char job[20];
}Human;                                             // ������ human ����ü�� Human���� ����ϰڴ�.

void showHuman(Human h)
{
	printf("name: %s age: %d job: %s\n", h.name, h.age, h.job);
}

int main() 
{
	int a;
	human h1 = { "ȫ�浿", 50, "����" };             // Human Ÿ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
	showHuman(h1);

	return 0;
}
*/