/*
  vector 객체를 생성하고 정수를 입력 받을 때마다 vector에 삽입하고 평균을 출력하시오.
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
		cout << "정수 한개 입력(0 종료): " << endl;
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
	
	cout << "프로그램을 종료합니다." << endl;

	

	return 0;
}