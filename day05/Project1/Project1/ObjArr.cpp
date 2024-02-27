/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person" << endl;
	}
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void SetPersonInfo() const
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person parr[3];              // 객체배열(객체타입은 Person)

	char namestr[100];           // 문자배열
	char* strptr;                // char 타입의 포인터변수
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;

		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}
	parr[0].SetPersonInfo();
	parr[1].SetPersonInfo();
	parr[2].SetPersonInfo();

	return 0;
}
*/