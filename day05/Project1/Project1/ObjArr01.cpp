/*
  객체배열
*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;

public:
	Human(const char *aname, int age) {
		cout << "생성자 호출" << endl;
		strcpy_s(name, aname);
		this->age = age;       //객체에 있는 필드값을 this를 통해 ..
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

	Human* h1 = new Human("가나다", 50);   // new 연산자를 통해서 heap 영역에 이름, 나이 할당(객체 생성)
	Human h2("라마바", 30);                // 객체로 멤버접근
	                                       
	h1->HumanInfo();                       // 객체포인터를 가지고 멤버에 접근한다.(-> : arrow연산자)
	//h1.HumanInfo();                      // 객체를 통한 멤버 접근

	delete h1;

	return 0;
}
*/