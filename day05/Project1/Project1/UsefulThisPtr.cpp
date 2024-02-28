/*#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;           // 첫 번째 정수를 저장하는 멤버 변수
	int num2;           // 두 번째 정수를 저장하는 멤버 변수
public:
    // 생성자: 두 개의 정수를 받아 멤버 변수를 초기화
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;      // this-> num1에 전달받은 num1의 값을 집어넣다 
		this->num2 = num2;
	}
	/*
	TwoNumber(int num1, int num2)
		: num1(num1), num2(num2)
	{
		// empty
	}
	*/
/*	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();

	return 0;
}
*/
/* 추가 설명 존
1. TwoNumber 클래스
=> num1과 num2라는 두 개의 멤버 변수를 가지고 있음.

2. 생성자 TwoNumber(int num1, int num2)
=> 두 개의 인자를 받아서 num1과 num2 멤버 변수에 값을 할당.

3. ShowTwoNumber() 함수
=> 객체의 num1과 num2 멤버 변수를 출력.
*/