// 사칙연산 만들기
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "2개의 정수를 입력하세요" << endl;
	cin >> n1 >> n2;

	cout << "+: " << n1 + n2 << endl;
	cout << "-: " << n1 - n2 << endl;
	cout << "X: " << n1 * n2 << endl;
	try {
		if (!n2) throw n2;
		cout << "/: " << n1 / n2 << endl;         // 나누기는 0이 안됨. 그래서 예외처리
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}

	return 0;
}