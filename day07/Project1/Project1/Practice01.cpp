/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;

class PersonClass       //class는 내가 만든 자료형, 메모리를 할당받지 않는다
{                       // 객체 생성중.. 필드와 멤버함수는 객체꺼
private:
	char* name;        // name 필드 
	int age;           // age 필드

public:
	PersonClass(const char* myname, int myage)     
	{
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];               // 9행의 name
		strcpy(name, myname);
		age = myage;
	}

	PersonClass(const PersonClass& copy) : age(copy.age)
	{
		cout << "깊은 복사생성자 호출" << endl;
		this->name = new char[strlen(copy.name) + 1];   
		strcpy(name, copy.name);                        
	}
	~PersonClass()
	{
		delete[]name;
		cout << "called destructor" << endl;
	}


	void PersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

int main()
{
	PersonClass p("홍길동", 30);
	p.PersonInfo();

	PersonClass copyp(p);
	copyp.PersonInfo();

	return 0;
}
*/