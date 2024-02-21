#include <iostream>

int sum(int v1, int v2) {
	int result;
	result = v1 + v2;
	return result;
}
int sub(int v1, int v2) {
	int result;
	result = v1 - v2;
	return result;
}
int mul(int v1, int v2) {
	int result;
	result = v1 * v2;
	return result;
}
int divide(int v1, int v2) {
	int result;
	result = v1 / v2;
	return result;
}
int main() 
{
	char op;
	int val1, val2
	int result = 0;

	std::cout << "두개 숫자 입력: ";
	std::cin >> val1 >> val2;

	std::cout << "연산자 입력: ";
	std::cin >> op;

	if (val1 == '+') {
		sum(val1, val2);
	}
	if (val1 == '-') {
		sub(val1, val2);
	}
	if (val1 == 'X') {
		mul(val1, val2);
	}
	if (val1 == '/') {
		divide(val1, val2);
	}
	return 0;
}