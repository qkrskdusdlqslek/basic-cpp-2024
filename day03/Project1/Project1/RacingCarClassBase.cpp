/*#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
		ACC_STEP=10, BRK_STEP=10
	};
}

class car
{
	// 멤버변수, 필드, 속성
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
	// 멤버함수, 메서드, 기능
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void car::InitMembers(const char* ID, int fuel)     // 필드의 초기화를 담당 메서드
{
	strcpy(gamerID, ID);                   // 전달된 ID의 문자열을 복사해서 gamerID에 저장
	fuelGauge = fuel;
	curSpeed = 0;
};

void car::ShowCarState()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl;
}
void car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) > CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	car run99;                               // class car 타입의 객체 run99 생성
	run99.InitMembers("run99", 100);        // run99객체의 InitMembers() 메서드 호출하여 필드를 초기화
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}
*/	