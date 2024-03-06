#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) { }
	friend ostream& operator<<(ostream& os, const Point& pos);

	void* operator new (size_t size)                 // 컴파일러가 자동으로 크기를 할당시켜 줌
	{                                 
		cout << "operator new: " << size << endl;
		void* adr = new char[size];            // 생성자 호출, 34번의 ptr 주소가 adr에 들어가 있음
		return adr;                            // 메모리 공간 할당 받는다
	}
	void operator delete (void* adr)           // delete 오버로딩
	{
		cout << "operator delete ()" << endl;       // new 연산자가 실행되면 출력
		delete[]adr;
	}
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

int main(void)
{
	Point* ptr = new Point(3, 4);      // new 연산자를 통해서 객체를 생성하면 12번이 실행됨
	cout << *ptr;
	delete ptr;

	return 0;
}
// 크기 먼저 할당 받고 생성자 호출을 함