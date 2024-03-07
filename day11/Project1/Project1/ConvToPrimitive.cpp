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
	operator int()              // 형 변환 연산자의 오버로딩 
	{
		return num;            // 형 변환 연산자는 반환문은 없지만 리턴문은 있다.
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num1;
	num1 = 30;
	Number num2 = num1 + 20;
	num2.ShowNumber();
	 
	return 0;
}