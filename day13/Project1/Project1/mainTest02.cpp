// ��Ģ���� �Լ� �����
#include <iostream>
using namespace std;

void cal(int _n1, int _n2)
{
	if (!_n2) throw _n2;
	cout << "+: " << _n1 + _n2 << endl;
	cout << "-: " << _n1 - _n2 << endl;                                                     
	cout << "X: " << _n1 * _n2 << endl;
	cout << "/: " << _n1 / _n2 << endl;
}
int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "2���� ������ �Է��ϼ���" << endl;
	cin >> n1 >> n2;
	cal(n1, n2);
	try {
		cal(n1, n2);
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}