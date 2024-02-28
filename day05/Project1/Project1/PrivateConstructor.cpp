/*#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}                      // 이니셜라이저
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);            // 값 변경 불가
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}      //25행이 오류인 이유 -> 싱글톤패턴(객체가 단 하나만 필요할 때)
};

int main(void)
{
	AAA base;
	base.ShowNum();

	// AAA a(10);       *오류 : private으로 되어있기 때문에 외부에서 객체를 생성할 수 없음!

	AAA& obj1 = base.CreateInitObj(3);      // AAA타입에 참조변수 선언 | CreateInitObj 멤버함수를 호출
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);     // obj1과 obj2는 다른객체
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
	return 0;
}
*/