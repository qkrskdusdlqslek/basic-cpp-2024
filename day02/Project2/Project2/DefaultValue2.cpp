#include <iostream>
int Adder(int num1 = 1, int num2 = 2);       // 함수 선언

int main(void)                               // 함수 호출을 하려면 함수 선언을 먼저 해야 함
{
	std::cout << Adder() << std::endl;      // 함수 호출:Adder() /  입력값 없음 -> 매개변수에 디폴트값 적용됨 
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)              // 함수 정의
{
	return num1 + num2;
}
