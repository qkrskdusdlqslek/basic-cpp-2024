/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Girl;        // Girl�̶�� �̸��� Ŭ������ �̸����� �˸�(���� �ص� ��) (�̸� �˷��ִ� �뵵, �ڵ� �� �� �������� ���� ��)

class Boy
{
private:
	int height;
	friend class Girl;                            // Girl Ŭ������ ���� friend ����
public:
	Boy(int len) : height(len)
	{ }
	void ShowYourFriendInfo(Girl& frn);           // ����� (����ο� ���Ǻθ� �и�)
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
	void ShowYourFriendInfo(Boy& frn);            // ����Լ��� ���Ǹ� ������ ����
	friend class Boy;                             // Boy Ŭ������ ���� friend ����
}; 

void Boy::ShowYourFriendInfo(Girl& frn)          // ���Ǻ� : ����Լ��� �Ҽ��� �����ؾ� �Ѵ�(����ο� ���Ǻθ� �и����� ��..)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)         // Girl class �ȿ� �ִ� �ʵ�� �����ؼ� ��� �����ϰ� ����� ��(�Ҽ� ����)
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