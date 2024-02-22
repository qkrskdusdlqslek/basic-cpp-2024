#include <iostream>
using namespace std;

int main()
{
	const int num = 10;            // num 변수를 상수화시킨다.
    // num = 100;                 // num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int *pnum1;                  // 포인터변수 선언: 포인터(주소)변수 pnum1 선언 (*: 그냥 포인터변수입니다만 알려주는 기호, 의미 없음)
	pnum1 = &num1;              // 변수 num1의 주소를 포인터변수 pnum1에 저장한다.(&: 주소 연산자)


	cout << "num에 저장된 값: " << num << endl;
	cout << "num1에 저장된 값: " << num1 << endl;
	cout << "num1의 주소값: "<< & num1 << endl;
	cout << "pnum1에 저장된 값: " << pnum1 << endl;
	cout << "Pnum1에 저장된 값의 데이터: " << *pnum1 << endl;     //*: 연산자(데이터를 나타냄)

	return 0;
}