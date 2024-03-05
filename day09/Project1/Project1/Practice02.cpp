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
	Point operator+(const Point& num)
	{
		Point pos(a + num.a, b + num.b);
		return pos;
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