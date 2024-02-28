/*
  복사생성자 : 객체를 복사할 때 호출되는 생성자
  따라서 복사할 객체를 입력으로 가져야 하는데,, 이때 원본 객체의 참조를 입력으로 받아야 한다.
*/
/*#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int n) {
		cout << "A(int n) 생성자 호출" << endl;
	}
	A(const A& r) {      // 복사생성자 , const를 붙이는 이유 : 원본에 해당되기 때문에 값이 변경되면 안됨.
		cout << "A(const A& r) 생성자 호출" << endl;
	}
};

void func(int a) {

}
int main(void)
{
	int n = 10;
	A obj1;            // 디폴트 생성자로 객체 생성
	A obj2(10);        // 입력 하나 가지는 생성자 호출, 정수형 인자를 가지는 생성자 호출
	A obj3(obj2);      // 복사 생성자 호출하여 obj1을 기반으로 obj3를 초기화
	func(n);


	return 0;
}
*/
/* 추가 설명
1. A()는 디폴트 생성자로,
	-> 인자 없이 호출될 때 실행.
2. A(int n)은 정수형 인자를 받는 생성자로,
	=> 정수형 인자가 주어졌을 때 호출.
3. A(const A& r)은 복사 생성자로,
	=> A 클래스의 객체를 복사하여 새로운 객체를 생성할 때 호출

*/