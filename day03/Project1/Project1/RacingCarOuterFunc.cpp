/*#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum                                                 // ������
	{
		ID_LEN         =20,                              // ���ȭ
		MAX_SPD        =200,
		FULL_STEP      =2,
		ACC_STEP       =10,
		BRK_STEP       =10
	};
}

struct Car
{
	//====================�������=================
	char gamerID[CAR_CONST::ID_LEN];                      //�ؼ�) char gamerID[20]; , :: -> ����������
	int fuelGauge;
	int curSpeed;
	//====================����Լ�=================
	void ShowCarState();                // �������� ���
	void Accel();                       // ����, �ӵ�����
	void Break();                       // �극��ũ, �ӵ�����
};
   
	void Car::ShowCarState()
	{
		cout << "������ID: " << gamerID << endl;
		cout << "�����: " << fuelGauge << "%" << endl;
		cout << "����ӵ�: " << curSpeed << "km/s" << endl;
	}
	void Car::Accel()
	{
		if (fuelGauge <= 0)                                   //�ؼ�)fuelGauge:100 , curSpeed=0
			return;
		else
			fuelGauge -= CAR_CONST::FULL_STEP;               //�ؼ�)fuelGuage=98

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;                     //�ؼ�)curSpeed=10
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
	run99.Accel();  //98, 10                      //Accel() �Լ� ȣ����.. �ؼ�) run99�ȿ� �ִ� Accel �Լ��� ������Ѷ�
	run99.Accel(); //96, 20
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
}
*/