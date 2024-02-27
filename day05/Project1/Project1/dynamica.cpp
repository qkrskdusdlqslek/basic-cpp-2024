/*
  메모리 동적할당 : new 연산자 사용
  프로그램 실행 중에 메모리를 할당 받는다.
*/
/*#include <iostream>
using namespace std;

int main()
{
	cout <<"int 크기: "<< sizeof(int) << endl;
	int *pi = new int;          // new 연산자를 통해서 heap 영역에 int 타입으로 메모리(4byte)를 할당받음
	                            // 할당받은 메모리의 주소를 리턴시켜줌. *동일한 주소를 받을 수 있는 포인터를 사용함!
	*pi = 10;                   // 데이터를 나타냄(포인터가 가리키고 있는 곳의 데이터)
	cout << "pi가 가리키는 곳에 저장된 값: " << *pi << endl;

	delete pi;                 // pi 반환(delete을 통해서 heap 영역에 동적 할당받은 메모리 공간을 해제)

	//----------------------------------------------------------------->

	int *pary = new int[10];       // new 연산자를 통해서 heap 영역에 10개의 정수값을 할당받을 수 있는 공간을 배열형태로 할당
	cout << sizeof(pary) << endl;    //포인터 변수의 크기는 8byte
	for (int i = 0; i < 10; i++) {           // 배열은 for문
		pary[i] = i + 10;         // 배열의 각 방에 원소(요소)값을 집어 넣는다. Ex) pary[0] = 10
	}

	for (int i = 0; i < 10; i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;     // 동적할당한 메모리를 배열타입으로 없애줘야 함.

	return 0;
}
*/