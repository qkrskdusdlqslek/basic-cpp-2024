#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a:b;    // ?�տ� �ִ� �κ��� ���̸� a�� ���ϵǰ� �����̸� b�� ���ϵȴ�.
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;     // ��(���ĺ� ������ ����..)
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;

	return 0;
}