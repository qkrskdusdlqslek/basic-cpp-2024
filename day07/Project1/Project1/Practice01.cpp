/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;

class PersonClass       //class�� ���� ���� �ڷ���, �޸𸮸� �Ҵ���� �ʴ´�
{                       // ��ü ������.. �ʵ�� ����Լ��� ��ü��
private:
	char* name;        // name �ʵ� 
	int age;           // age �ʵ�

public:
	PersonClass(const char* myname, int myage)     
	{
		cout << "������ ȣ��" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];               // 9���� name
		strcpy(name, myname);
		age = myage;
	}

	PersonClass(const PersonClass& copy) : age(copy.age)
	{
		cout << "���� ��������� ȣ��" << endl;
		this->name = new char[strlen(copy.name) + 1];   
		strcpy(name, copy.name);                        
	}
	~PersonClass()
	{
		delete[]name;
		cout << "called destructor" << endl;
	}


	void PersonInfo() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

int main()
{
	PersonClass p("ȫ�浿", 30);
	p.PersonInfo();

	PersonClass copyp(p);
	copyp.PersonInfo();

	return 0;
}
*/