/*
  객체배열
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
		cout << "생성자 호출" << endl;
		strcpy_s(name, aname);
		age = aage;
	}
	void HumanInfo() {
		cout << "이름: " << name << " ";
		cout << "나이: " << age << endl;
	}
	~Human() {
		cout << "소멸자 호출" << endl;
		delete[]name;
	}
};
int main()
{
	Human h[3] = {Human("홍길동", 50), Human("안수희", 31), Human("이한오", 39)};     //객체배열

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	return 0;
}