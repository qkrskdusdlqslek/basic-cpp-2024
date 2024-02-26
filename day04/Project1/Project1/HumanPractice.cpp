//이름, 나이, 직업, 생년월일(멤버 이니셜라이저 사용)
/*#include <iostream>
using namespace std;

class HumanClass {
	const int ID;
	char name[20];
	char job[20];
	int age;

public:
	HumanClass(int hID, const char* hname, const char* hjob, int hage) : ID(hID) {
		strcpy_s(name, hname);
		strcpy_s(job, hjob);
		age = hage;
	}
	void ShowInfo() const {
		cout << "생년월일 -> " << ID << endl;        // 학번 출력
		cout << "이름 -> " << name << endl;      // 이름 출력
		cout << "직업 -> " << job << "과" << endl;     // 전공 출력
		cout << "나이 -> " << age << "살" << endl;       // 나이 출력
	}
};

	int main()
	{
		HumanClass h1(960201, "홍길동", "개발자", 29);
		h1.ShowInfo();
		return 0;
}
*/