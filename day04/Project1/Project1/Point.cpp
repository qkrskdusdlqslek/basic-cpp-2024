/*#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const               // const 함수!
{
	return x;
}

int Point::GetY() const             // 함수를 const화 시키려면 맨뒤에 붙여야 함 --> const를 앞에 붙이면 출력을 상수화 시킨다는 뜻
{
	return y;
}

bool Point::SetX(int xpos)
{
		if (0 > xpos || xpos > 100)
		{
			cout << "벗어난 범위의 값 전달" << endl;
			return false;
		}
        x = xpos;
		return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}
*/