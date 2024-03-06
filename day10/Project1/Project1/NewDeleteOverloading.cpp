#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) { }
	friend ostream& operator<<(ostream& os, const Point& pos);

	void* operator new (size_t size)                 // �����Ϸ��� �ڵ����� ũ�⸦ �Ҵ���� ��
	{                                 
		cout << "operator new: " << size << endl;
		void* adr = new char[size];            // ������ ȣ��, 34���� ptr �ּҰ� adr�� �� ����
		return adr;                            // �޸� ���� �Ҵ� �޴´�
	}
	void operator delete (void* adr)           // delete �����ε�
	{
		cout << "operator delete ()" << endl;       // new �����ڰ� ����Ǹ� ���
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
	Point* ptr = new Point(3, 4);      // new �����ڸ� ���ؼ� ��ü�� �����ϸ� 12���� �����
	cout << *ptr;
	delete ptr;

	return 0;
}
// ũ�� ���� �Ҵ� �ް� ������ ȣ���� ��