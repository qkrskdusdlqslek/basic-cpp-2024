/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Girl;        // Girl이라는 이름이 클래스의 이름임을 알림(생략 해도 됨) (미리 알려주는 용도, 코드 볼 때 가독성을 높여 줌)

class Boy
{
private:
	int height;
	friend class Girl;                            // Girl 클래스에 대한 friend 선언
public:
	Boy(int len) : height(len)
	{ }
	void ShowYourFriendInfo(Girl& frn);           // 선언부 (선언부와 정의부를 분리)
};

class Girl
{
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);            // 멤버함수의 정의를 밖으로 빼줌
	friend class Boy;                             // Boy 클래스에 대한 friend 선언
}; 

void Boy::ShowYourFriendInfo(Girl& frn)          // 정의부 : 멤버함수의 소속을 정의해야 한다(선언부와 정의부를 분리했을 때..)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)         // Girl class 안에 있는 필드로 접근해서 사용 가능하게 만들어 줌(소속 정의)
{
	cout << "His height: " << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}
*/