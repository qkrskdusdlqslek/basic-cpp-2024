/*
  vector ��ü�� �����ϰ� ������ �Է� ���� ������ vector�� �����ϰ� ����� ����Ͻÿ�.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int inKey;
	int sum=0;

	while (true) {
		cout << "���� �Ѱ� �Է�(0 ����): " << endl;
		cin >> inKey;
		if (!inKey) {
			break;
		}
		v.push_back(inKey);
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << endl;
		}
		sum += inKey;
		cout << sum / v.size() << endl;
	}
	
	cout << "���α׷��� �����մϴ�." << endl;

	

	return 0;
}