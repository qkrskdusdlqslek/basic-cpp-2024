#include <iostream>
using namespace std;

class Point
{
private:
	int a, b;
public:
	Point(int aa=0, int ab=0) : a(aa), b(ab)
	{ }
	void viewPoint() const
	{
		cout << '[' << a << "," << b << ']' << endl;
	}
	Point operator+(const Point& other)
	{
		Point pos(a + other.a, b + other.b);
		return pos;
	 }
	// ���� ������ �����ε�: Point ��ü�� ������ ���� ����� ��ȯ
	friend Point operator+(const int& num, const Point& other)
	{
		return Point(num + other.a, num + other.b);
	}
	/*friend Point operator+(const Point& other, const int& num)
	{
		return num + other;
	}*/
	// ��� ������ �����ε�: Point ��ü�� ��ǥ�� ���
	friend ostream& operator<<(ostream& os, const Point& other) {
		os << "(" << other.a << ", " << other.b << ")"; // ���� Point ��ü�� ��ǥ ���
		return os;
	}
};

int main()
{
	Point a(10, 20);
	a.viewPoint();

	Point b(30, 40);
	b.viewPoint();

	Point c = a + b;
	c.viewPoint();

	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();
	
	return 0;
}