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
	void ShowData() const            // ��� �Լ�, const�� ����ؼ� ���� ����� �� ����
	{
		cout << "num: " << num << endl;   // ���� ����� �� �ִ� ������ ����
	}
};

int main(void)
{
	const SoSimple obj(7);         // const�� ���� ��ü�� ���ȭ ��Ŵ
	// obj.AddNum(20);
	obj.ShowData();

	return 0;
}
*/