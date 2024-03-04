/*#include <iostream>
using namespace std;

int simObjCnt = 0;         // 전역변수(소속X, 범위X)
int cmxObjCnt = 0;         // 전역변수 (--> 가급적 사용X)

class SoSimple             // 객체가 하나 생성될 때마다..
{
public:
	SoSimple()
	{
		simObjCnt++;        // 1씩 증가 중..
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

class SoComplex           //객체가 하나 생성될 때마다
{
public:
	SoComplex()
	{
		cmxObjCnt++;      // 1씩 증가 중..
		cout << cmxObjCnt << "번째 SoSimplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
}
};

int main(void)
{
	SoSimple sim1;       
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();                // 임시객체 생성, 생성자

	return 0;
}
*/