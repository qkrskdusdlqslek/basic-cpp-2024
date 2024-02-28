/*#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple                                                   // class는 또 하나의 타입
{
public:
	Simple()                                                  // Simple() = 함수, 생성자(클래스 이름과 같은 매서드)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;                                // new 연산자를 통한 객체생성

	cout << "case2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);      // heap영역에 메모리 할당/ malloc 뒤에 크기를 적어야 함

	cout << endl << "end of main" << endl;
	delete sp1;                                             // 객체를 반환한다
	free(sp2);
	return 0;
}
*/