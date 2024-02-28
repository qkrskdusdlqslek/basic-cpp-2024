/*#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)     // 입력 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;        // strlen()은 문자열의 길이를 구하는 함수, +1은 문자열이라는 것을 나타내기 위함
		name = new char[len];               // new 키워드는 heap 영역에 새로운 메모리 공간을 할당하라는 명령어라고 생각해야 함
		cout << "char의 크기"<<sizeof(char) << endl;
		strcpy(name, myname);              // myname과 name은 다른 객체!
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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