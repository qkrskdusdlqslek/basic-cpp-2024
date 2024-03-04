#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on() { cout << "remote" << endl; }     // virtual �����Լ�
	
};
class SamsungTv : public RemoteControl
{
public:
	void on() { cout << "�Ｚ TV on" << endl; }
};
class LgTv : public RemoteControl
{
public:
	void on() { cout << "���� TV on" << endl; }
};

int main(void)
{
	RemoteControl * remote = new SamsungTv();    // �ϳ��� �����..
	
	remote->on();             //remote ��ü ���� -> SamsungTv ����
	remote = new LgTv();      // LgTv ��ü ����
	remote->on();             // LgTv ����

	
	delete remote; 

	return 0;
}