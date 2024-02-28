#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;              //------> 1부터 증가함
	//int cnt = 0;              //-------> 1만 계속 나옴
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++) {       // 반복제어 for문 -> 10번 실행 / Counter 10번 호출 중..
		Counter();
	}
	return 0;
}