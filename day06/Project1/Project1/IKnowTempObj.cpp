/*#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "creat obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTemInfo()
	{
		cout << "My num is " << num << endl;
	}
};
		
int main(void)
{
	Temporary(100);           // Temporary는 클래스 --> 원래는 Temporary t(100);라고 작성해야 하는데 지금 객체 이름이 없음(t)
	                          // --> 이름 없는 임시객체 (임시객체는 주소가 없다..)
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTemInfo();
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);         // 임시객체는 참조를 할 수 없다. 하지만 const라는 키워드를 붙이면 참조 가능해짐
	cout << "********** end of main!" << endl << endl;

	return 0;
}
*/