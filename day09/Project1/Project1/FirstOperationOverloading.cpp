#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;             // 동일한 타입이기 때문에 쉼표 사용해서 작성 가능
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)      // int x=0 : 디폴트 값 , 디폴트 초기값은 입력이 전달 안되면 디폴트값으로 초기화
	{ }
	void ShowPosition() const       // 상수화(cosnt): 변경 하면 안되는 값에 사용!
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	Point operator+(const Point& ref)      // 함수의 정의 부분, operator+라는 이름의 함수, 출력+이름+(함수)
   // 두개의 객체에 속성값을 더해서 생성 (우리가 만든 자료형에 더하기를 하기 위해서 연산자 오버로딩을 사용)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);    // 새로운 객체 생성(24번이랑 동일한 코드)
		return pos;
	}
};

int main(void)
{
	Point pos1(3, 4);     
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);    // 대입연산자를 통해 멤버함수 오버로딩 하는 문법!
	Point pos4 = pos2.operator+(pos3);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();

	return 0;
}