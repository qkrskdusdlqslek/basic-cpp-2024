/*#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const            // 상수 함수, const를 사용해서 값이 변경될 수 없음
	{
		cout << "num: " << num << endl;   // 값이 변경될 수 있는 소지가 없음
	}
};

int main(void)
{
	const SoSimple obj(7);         // const를 통해 객체를 상수화 시킴
	// obj.AddNum(20);
	obj.ShowData();

	return 0;
}
*/