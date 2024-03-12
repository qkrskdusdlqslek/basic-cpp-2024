/*
  char ary[] = {'a','b','c','d','e','f'};
  조건 : while문과 if문만으로 배열 순서를 바꾸어 저장하고 출력하시오
*/

#include <iostream>
using namespace std;

int main()
{
	char ary[]  = { 'a','b','c','d','e','f' };
	int length = sizeof(ary) / sizeof(ary[0]);

	cout << "배열 사이즈: " << length << endl;
	for (int i = 0; i < length; i++)
		cout << ary[i] << " ";
	cout << endl;

	int i = 0;
	while (i < length / 2) {
		char temp = ary[i];
		ary[i] = ary[length - 1 - i];
		ary[length - 1 - i] = temp;
		i++;
	}
	cout << "바꾼 배열";
	for (int i = 0; i < length; i++)
		cout << ary[i] << " ";
	cout << endl;

	return 0;
}