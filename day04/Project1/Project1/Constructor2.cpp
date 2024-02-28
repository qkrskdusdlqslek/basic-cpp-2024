/*#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public: 
	SimpleClass(int n1 = 0, int n2 = 0)                        //선언에 값을 주는 형태를 매개변수 초기화
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();             //함수의 원형 선언!(출력에 해당됨), 함수이름:sc1/ 자료형:SimpleClass
	SimpleClass mysc = sc1();      //대입연산자를 먼저 찾기(오른쪽 왼쪽 나눠서 해석!)
	mysc.ShowData();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);        //SimpleClass타입의 객체 생성 코드(입력값 2개를 주고 있음) 
		return sc;                  //sc(객체) 리턴
}
*/