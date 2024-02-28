/*#include <iostream>
using namespace std;

class Point;          // Point가 클래스의 이름임을 선언

class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0)
	{ }

	Point PointAdd(const Point&, const Point&);      // 함수 선언부에서는 매개변수의 이름은 생략 가능하나 (Ex. Point &fri -> Point&)
	Point PointSub(const Point&, const Point&);      // 매개변수 타입은 생략 할 수 없다.
	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{ }
	friend Point PointOP::PointAdd(const Point&, const Point&);     
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)    //PointAdd의 정의(정의에서는 멤버변수 이름은 생략X)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);          // 참조하고 있는 Point 객체의 x 코드를 더해라
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main(void)
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));
	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}
*/