/*#include <iostream>
using namespace std;

class SoSimple
{
public:                           // 접근제한이 public
	static int simObjCnt;        // static 멤버변수 선언(클래스 멤버--> 객체 없어도 접근 가능), static이 없으면 객체로 접근해야 함
public:                          // 불필요하지만 변수와 함수의 구분을 목적으로 삽입하기도 함
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;       // static 멤버변수 초기화

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;      // 클래스 이름으로 static 멤버에 접근가능
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번재 SoSimple 객체" << endl;

	return 0;
}
*/