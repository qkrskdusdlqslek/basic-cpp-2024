// ��Ģ���� �����
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "2���� ������ �Է��ϼ���" << endl;
	cin >> n1 >> n2;

	cout << "+: " << n1 + n2 << endl;
	cout << "-: " << n1 - n2 << endl;
	cout << "X: " << n1 * n2 << endl;
	try {
		if (!n2) throw n2;
		cout << "/: " << n1 / n2 << endl;         // ������� 0�� �ȵ�. �׷��� ����ó��
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}