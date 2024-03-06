#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;               // 멤버변수 2개
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{
		cout << "Point 객체 생성" << endl;
	}
	~Point()
	{
		cout << "Point 객체 소멸" << endl;
	}
	void SetPos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	friend ostream& operator<<(ostream& os, const Point& pos);     // 객체를 출력하기 위해서 연산자 오버로딩 사용
};
ostream& operator<<(ostream& os, const Point& pos)  // 포인터 타입에 있는 멤버변수들을 출력
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

class SmartPtr
{
private:
	Point* posptr;         // Point타입의 포인터 변수
public:
	SmartPtr(Point * ptr) : posptr(ptr)
	{ }

	Point& operator*() const
	{
		return *posptr;       // 필드 값(포인터 변수)의 데이터를 전달 -> Point타입의 객체를 리턴
	}
	Point* operator->() const
	{
		return posptr;         // 포인터 객체를 리턴
	}
	~SmartPtr()
	{
		printf("SmartPtr 객체 소멸\n");
		delete posptr;
	}
};

int main(void)
{
	SmartPtr sptr1(new Point(1, 2));        // 힙영역에 생성
	SmartPtr sptr2(new Point(2, 3));
	SmartPtr sptr3(new Point(4, 5));
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	sptr1->SetPos(10, 20);
	sptr2->SetPos(30, 40);
	sptr3->SetPos(50, 60);
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	return 0;
}