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
	Person(const char* myname, int myage)
	{
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	//---------------> 깊은 복사생성자
	Person(const Person& copy) : age(copy.age)
	{
		cout << "깊은 복사생성자 호출" << endl;
		this->name = new char[strlen(copy.name) + 1];    // 문자열을 기본 복사하는 형태
		strcpy(name, copy.name);
		this->age = copy.age;                           // 멤버 대 멤버 복사
	}
	*/
	/*--------> 디폴트 복사생성자
	Person(const Person & copy)
	{  
		this->name = copy.name;
		this->age = copy.age;
	}
	*/

	/*void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
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
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/

/*
int func(int a) {    // a= 10;, num의 10을 복사해서 사용한다.
	a = 10 + a;
	return a;        // a를 리턴한다.  a= 20 , a를 복사함. 
}

int num = 10;        
int res = func(num);    // res라는 변수는 20을 가지고 있다. 그렇다면 a의 20과 res의 20은 다르다. 
                        // 왜냐하면 리턴시켜주는 a를 복사해서 res를 사용하는 것이다. 복사생성자가 호출된다.
                        // 값을 전달해줄 때만 사용 가능 -> Call by value일 때만 사용!
*/