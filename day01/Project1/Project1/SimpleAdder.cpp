// #include <iostream>


/*int global = 100;   // 지역변수

void func() {
	int a;
	a = 100;    // a는 지역변수 -> 함수 안에 있기 때문에, 이 함수 안에서만 사용 가능
}

int main(void)
{
	int a;   // 지역변수 -> 11~26번 함수 안에서만 사용 가능
	int val1;     // 변수선언 - 메모리공간(RAM)에 int크기로 할당 받고 val이름으로 사용함
	std::cout <<"첫 번째 숫자입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	a = 10; 
	return 0;
}

  지역변수 = 로컬변수 : 선언되어진 범위안에서만 사용 가능(static 영역에 저장) val = 100;
*/