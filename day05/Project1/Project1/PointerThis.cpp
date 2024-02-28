/*#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int num) //: num(n)   이니셜라이저
	{
		this->num = num;
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;   //this는 객체 자기자신을 가리킴
	}
	void ShowSimpleData()          
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;   //this로 인해 객체 자기자신의 주소를 포인터로 가리키고 있음
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
};
*/