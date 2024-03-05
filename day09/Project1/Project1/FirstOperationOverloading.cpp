#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;             // ������ Ÿ���̱� ������ ��ǥ ����ؼ� �ۼ� ����
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)      // int x=0 : ����Ʈ �� , ����Ʈ �ʱⰪ�� �Է��� ���� �ȵǸ� ����Ʈ������ �ʱ�ȭ
	{ }
	void ShowPosition() const       // ���ȭ(cosnt): ���� �ϸ� �ȵǴ� ���� ���!
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	Point operator+(const Point& ref)      // �Լ��� ���� �κ�, operator+��� �̸��� �Լ�, ���+�̸�+(�Լ�)
   // �ΰ��� ��ü�� �Ӽ����� ���ؼ� ���� (�츮�� ���� �ڷ����� ���ϱ⸦ �ϱ� ���ؼ� ������ �����ε��� ���)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);    // ���ο� ��ü ����(24���̶� ������ �ڵ�)
		return pos;
	}
};

int main(void)
{
	Point pos1(3, 4);     
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);    // ���Կ����ڸ� ���� ����Լ� �����ε� �ϴ� ����!
	Point pos4 = pos2.operator+(pos3);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();

	return 0;
}