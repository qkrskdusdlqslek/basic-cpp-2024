/*#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)     // �Է� 2���� ���� ������
	{
		int len = strlen(myname) + 1;        // strlen()�� ���ڿ��� ���̸� ���ϴ� �Լ�, +1�� ���ڿ��̶�� ���� ��Ÿ���� ����
		name = new char[len];               // new Ű����� heap ������ ���ο� �޸� ������ �Ҵ��϶�� ��ɾ��� �����ؾ� ��
		cout << "char�� ũ��"<<sizeof(char) << endl;
		strcpy(name, myname);              // myname�� name�� �ٸ� ��ü!
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete []name;
		cout << "called destrcutor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
*/