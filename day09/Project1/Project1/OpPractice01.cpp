#include <iostream>
using namespace std;

class Myclass
{
	int a;
public:
	Myclass(int aa = 0) : a(aa)
	{ }
	void print() const
	{
		cout << '[' << a << ']' << endl;
	}
	Myclass operator+(const Myclass& num)
	{
		Myclass pos(a + num.a);            // ���ο� ��ü ����
		return pos;             
	}
};

int main()
{
	Myclass a(10);
	a.print();                            // value: 10

	Myclass b(a);
	b.print();                           // value: 10

	Myclass c = b;
	c.print();                          // vlaue: 10

	Myclass d = a + b + c;             // vlaue: 30
	d.print();
	

	return 0;
}