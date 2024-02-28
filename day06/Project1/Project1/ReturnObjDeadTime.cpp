/*#include <iostream>
using namespace std;

class SoSimple                     //SoSimple 클래스 멤버 변수 하나 가지고 있음
{
private: 
	int num;                      // 멤버변수는 3개- 생성자 1, 소멸자 2
public:
	SoSimple(int n) : num(n)                           // 입력생성자
	{
		cout << "New Object: " << this << endl;        // this는 객체 자기자신을 가리키는 포인터 --> 객체 obj주소 (31행 실행)
	}
	SoSimple(const SoSimple& copy) : num(copy.num)     //복사생성자
	{
		cout << "New Copy obj: " << this << endl;     // 임시객체 주소
	}
	~SoSimple()                                       // 소멸자 호출
	{ 
		cout << "Destroy obj: " << this << endl;     // 이 객체가 소멸되었구나를 알 수 있음 -->객체 ob주소(32행 실행)
		                                             // 객체 ob 소멸 & 임시객체 소멸
	}
};

SoSimple SimpleFuncObj(SoSimple ob)                  // 출력_SimpleFuncObj 함수_SoSimple ob 입력 순으로..
                                                     // obj를 복사해서 ob를 만들어냄 
{
	cout << "Parm ADR: " << &ob << endl;             // &: 주소 연산자 (참조 연산자는 선언할 때 사용, but 여기는 선언하는 부분X)
	                                                 // 객체 ob 주소를 구하는 코드
	return ob;                                       // 23행에 있는 ob 
}

int main(void)
{
	SoSimple obj(7);         //SoSimple 타입의 obj라는 객체 생성, 7이라는 입력값을 호출
	SimpleFuncObj(obj);      

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);     // 오른쪽에 있는 것을 왼쪽에 집어넣음 , 임시객체 주소 저장
	cout << "Return Obj " << &tempRef << endl;    // 주소 연산자(tempRef의 주소를 알아보고 있음), 임시객체 주소 저장

	return 0;
}
*/