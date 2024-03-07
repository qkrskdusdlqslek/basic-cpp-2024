#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}
	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	/*
	  int a = 10;
	  int b = a;     동일한 타입이라서 충분히 대입연산 일어날 수 있음
	  double d = 3.14;
	  a = d;    a는 int타입, d는 double타입 -> 타입이 서로 다름(컴파일이 자동으로 형변환 시켜줌, But 원칙은 같은 타입만..)
	*/
	Number num;           // num이라는 객체 생성
	num = 30;         // 1. num=Number(30); -> 2. num.operator((Number(30)); ,임시객체를 생성하고 이를 대상으로 하는 대입연산자 호출
	num.ShowNumber();

	return 0;
}