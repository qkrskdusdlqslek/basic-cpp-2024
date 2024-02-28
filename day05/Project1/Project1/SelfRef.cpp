/*#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)    // 이니셜라이저
	{
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;         // num의 참조, this가 저장하고 있는 값은 자기자신의 주소값-> *this :객체 자기자신 
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;       // this 안에 들어있는 데이터(num) 받고 있음.
	}
};

int main(void)
{                                    // obj라는 객체 하나 생성
	SelfRef obj(3);                //obj라는 SelfRef객체는 3이라는 값을 입력받아..
	SelfRef &ref = obj.Adder(2);   //obj에서 Adder라는 메서드를 호출중..

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();    

	return 0;
}
*/