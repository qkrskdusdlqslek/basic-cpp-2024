/*#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)    // 객체 자기자신을 참조 형태로 받고 있음
	{
		num += n;              // num = num + n;
		return *this;          // this 포인터를 통해서 객체를 전달하고 있음
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;                                           // 복사생성자 호출
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();           // SimpleFuncObj(obj) 임시 객체 생성
	//SoSimple re = SimpleFuncObj(obj);
	obj.ShowData();
	return 0;
}
*/