#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a:b;    // ?앞에 있는 부분이 참이면 a가 리턴되고 거짓이면 b가 리턴된다.
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;     // 참(알파벳 순서에 따라서..)
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;

	return 0;
}