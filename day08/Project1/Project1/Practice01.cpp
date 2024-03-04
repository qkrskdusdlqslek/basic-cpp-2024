#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on() { cout << "remote" << endl; }     // virtual 가상함수
	
};
class SamsungTv : public RemoteControl
{
public:
	void on() { cout << "삼성 TV on" << endl; }
};
class LgTv : public RemoteControl
{
public:
	void on() { cout << "엘지 TV on" << endl; }
};

int main(void)
{
	RemoteControl * remote = new SamsungTv();    // 하나만 만들기..
	
	remote->on();             //remote 객체 생성 -> SamsungTv 실행
	remote = new LgTv();      // LgTv 객체 생성
	remote->on();             // LgTv 실행

	
	delete remote; 

	return 0;
}