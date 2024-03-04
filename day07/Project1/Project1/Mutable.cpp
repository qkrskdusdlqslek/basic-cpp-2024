/*#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;                  // const 함수에 대한 예외를 둔다!
public:
	SoSimple(int n1, int n2)          // 생성자
		: num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const     // 함수를 const화 시키면 안에 있는 값을 변경X
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const        // 값 변경X
	{
		num2 = num1;               // num2의 값 변경되고 있음.. -> mutable 키워드가 있어서 가능
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}
*/