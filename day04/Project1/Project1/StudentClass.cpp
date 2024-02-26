//학번, 이름, 전공, 나이
/*#include <iostream>
using namespace std;

class StudentClass
{
public:                           //**중요** (private랑 확실하게 비교하기)
    const int ID;                 // 학번은 변경되면 X 그래서 const를 붙임-> 학번을 상수화(상수 만들 때 반드시 초기화 시켜야 함)
	char name[20];                // 문자배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 한다.
	char major[20];
	int age;
	// 문자열은 주소이기 때문에 포인터 변수에 넣어서 사용한다. - 문자열의 첫번째 문자 주소가 저장된다.
	// 멤버 이니셜라이즈는 객체 생성시 초기화 되지 않는 멤버들을 초기화 할 때 사용함. 
	// 즉 객체생성과 상관없이 미리 초기화되는 멤버들에게 초기화 
	StudentClass(int aID, const char* pname, const char* pmajor, int aage) : ID(aID) { //멤버 이니셜라이즈
	//	ID = aID;
		strcpy_s(name, pname);      // 문자배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 한다.
		strcpy_s(major, pmajor);
		age = aage;
	}

	void ShowInfo() const {
		cout << "학번 -> " << ID << endl;        // 학번 출력
		cout << "이름 -> " << name << endl;      // 이름 출력
		cout << "전공 -> " << major << "과" << endl;     // 전공 출력
		cout << "나이 -> " << age << "살" << endl;       // 나이 출력
	}
};

int main()
{
	StudentClass s1(1, "홍길동", "IT", 27);          // 객체를 생성하면 생성자가 호출
	s1.ShowInfo();

	return 0;
}
*/