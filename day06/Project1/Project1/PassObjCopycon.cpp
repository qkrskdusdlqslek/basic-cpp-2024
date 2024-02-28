/*#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "SoSimple(int n) constructor 호출" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)                    // SoSimple을 참조하고 있는 copy = obj
	{
		cout << "called SoSimple(const SoSimple& copy)" << endl;     // 복사생성자 호출
	}

	void ShowData()                            // 멤버함수 : 객체 생성 후에 사용 가능
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)              // 전역함수 : 소속 없음, 아무나 접근 가능(객체 생성 필요 없음)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);                    // obj는 인수
	cout << "함수호출 후" << endl;

	return 0;
}
*/