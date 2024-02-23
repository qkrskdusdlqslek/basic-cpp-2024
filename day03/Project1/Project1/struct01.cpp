/* 
   C 타입의 구조체 : 구조체 멤버로 멤버변수만 가진다.

#include <stdio.h>                                      // C파일이 됨

typedef struct human {                                // human 구조체 : struct(구조체 이름) -> 내가 만든 사용자 정의 자료형
	char name[20];                                   // 문자를 나타내는 타입 : char / 속성; 멤버변수(name, age, job)
	int age;
	char job[20];
}Human;                                             // 앞으로 human 구조체를 Human으로 사용하겠다.

void showHuman(Human h)
{
	printf("name: %s age: %d job: %s\n", h.name, h.age, h.job);
}

int main() 
{
	int a;
	human h1 = { "홍길동", 50, "의적" };             // Human 타입의 변수를 선언하고 초기화를 시킨다.
	showHuman(h1);

	return 0;
}
*/