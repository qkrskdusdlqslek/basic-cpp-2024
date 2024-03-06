#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n) : num(n) { }
	void ShowData() { cout << num << endl; }

	Number* operator->()
	{
		return this;        // 자기자신의(객체) 포인터 리턴
	}

	Number& operator*()    // 데이터 참조 형태
	{
		return *this;      
	}
};

int main(void)
{
	Number num(20);
	num.ShowData();

	(*num) = 30;            //  포인터를 통한 간접참조 -> 자기자신에 30 값을 집어넣음
	num->ShowData();        // 포인터를 통해 멤버함수 접근
	(*num).ShowData();      // 17번 실행

	return 0;
}