/*
  C++ 클래스 : 클래스 멤버로 멤버 변수와 멤버 함수를 가진다.

#include <iostream>                                      // C++ 파일

class human {                                // human class (내가 만든 사용자 정의 자료형)
public:
	char name[20];                                   // 문자를 나타내는 타입 : char / 속성담당 멤버변수(name, age, job)
	int age;
	char job[20];

	void showHuman()                          // 기능담당 멤버함수
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}

}Human;                                             // 앞으로 human 구조체를 Human으로 사용하겠다.

int main()
{
	int a;
//	human h1 = { "홍길동", 50, "의적" };             // Human 타입의 변수를 선언하고 초기화를 시킨다.
//	h1.showHuman();
	human h1 = { "홍길동", 50, "의적" };
	h1.showHuman();

	return 0;
}
*/