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
	// 덧셈 연산자 오버로딩: Point 객체와 정수를 더한 결과를 반환
	friend Point operator+(const int& num, const Point& other)
	{
		return Point(num + other.a, num + other.b);
	}
	/*friend Point operator+(const Point& other, const int& num)
	{
		return num + other;
	}*/
	// 출력 연산자 오버로딩: Point 객체의 좌표를 출력
	friend ostream& operator<<(ostream& os, const Point& other) {
		os << "(" << other.a << ", " << other.b << ")"; // 현재 Point 객체의 좌표 출력
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