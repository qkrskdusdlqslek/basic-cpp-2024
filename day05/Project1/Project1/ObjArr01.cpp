/*
  ��ü�迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;

public:
	Human(const char *aname, int aage) {
		cout << "������ ȣ��" << endl;
		strcpy_s(name, aname);
		age = aage;
	}
	void HumanInfo() {
		cout << "�̸�: " << name << " ";
		cout << "����: " << age << endl;
	}
	~Human() {
		cout << "�Ҹ��� ȣ��" << endl;
		delete[]name;
	}
};
int main()
{
	Human h[3] = {Human("ȫ�浿", 50), Human("�ȼ���", 31), Human("���ѿ�", 39)};     //��ü�迭

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	return 0;
}