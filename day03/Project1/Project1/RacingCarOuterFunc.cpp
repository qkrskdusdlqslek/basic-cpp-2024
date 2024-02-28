/*#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum                                                 // 열거형
	{
		ID_LEN         =20,                              // 상수화
		MAX_SPD        =200,
		FULL_STEP      =2,
		ACC_STEP       =10,
		BRK_STEP       =10
	};
}

struct Car
{
	//====================멤버변수=================
	char gamerID[CAR_CONST::ID_LEN];                      //해석) char gamerID[20]; , :: -> 범위연산자
	int fuelGauge;
	int curSpeed;
	//====================멤버함수=================
	void ShowCarState();                // 상태정보 출력
	void Accel();                       // 엑셀, 속도증가
	void Break();                       // 브레이크, 속도감소
};
   
	void Car::ShowCarState()
	{
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료랑: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl;
	}
	void Car::Accel()
	{
		if (fuelGauge <= 0)                                   //해석)fuelGauge:100 , curSpeed=0
			return;
		else
			fuelGauge -= CAR_CONST::FULL_STEP;               //해석)fuelGuage=98

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;                     //해석)curSpeed=10
	}
	void Car::Break()
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
	Car run99 = { "run99", 100, 0 };
	run99.Accel();  //98, 10                      //Accel() 함수 호출중.. 해석) run99안에 있는 Accel 함수를 실행시켜라
	run99.Accel(); //96, 20
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
}
*/