/*
  5명의 이름과 국,영,수 3과목을 입력받아 학생별 평균, 그리고 과목별 총점과 평균을 구하시오.
  1. 객체 포인터 배열 사용
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Grade {
	char* name;        // 이름을 포인터 주소로 사용하겠다.
	int ko;
	int eng;
	int math;
public:
	Grade(char* sname, int sko, int seng, int smath) {
		int len = strlen(sname) + 1;
		name = new char[len];
		strcpy(name, sname);
		ko = sko;
		eng = seng;
		math = smath;
	}
	Grade()
	{
		name = NULL;
		ko = 0;
		eng = 0;
		math = 0;
		cout << "called Grade()" << endl;
	}
	void SetStudentInfo(char *sname, int sko, int seng, int smath)
	{
		name = sname;
		ko = sko;
		eng = seng;
		math = smath;
	}
	void ShowData() const
	{
		cout << "이름: " << name << ", ";
		cout << "국어점수: " << ko << ", ";
		cout << "영어점수: " << eng << ", ";
		cout << "수학점수: " << math << endl;
	}

	~Grade() {                  // 소멸자
		cout << "called destructor!" << endl;
	}
	int getKo() {
		return ko;
	}
	int getEng() {
		return eng;
	}
	int getMath() {
		return math;
	}

	int sum() {
		int sum = ko + eng + math;
		return sum;
	}
	double avr() {
		double avr = sum() / 3.0;
		return avr;
	}
};

int main(void)
{
	// Grade* gradeAry[3];       // 객체 포인터 배열
	Grade gradeAry[3];

	char name[20];
	int inKo;
	int inEng;
	int inMath;
	int len;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	
	// 1. 입력 받는 코드 작성
	for (int i = 0; i < 3; i++) {
		cout << "이름 입력: ";
		cin >> name;
		cout << "국어 점수: ";
		cin >> inKo;
		cout << "영어 점수: ";
		cin >> inEng;
		cout << "수학 점수: ";
		cin >> inMath;
		len = strlen(name) + 1;
		
		//cout << name << inKo << inEng << inMath << endl;

	// 2. 객체 생성: 5개의 객체 생성(일단 2개 생성), 객체 배열 사용 or 객체 포인터 배열 사용
		gradeAry[i].SetStudentInfo(name, inKo, inEng, inMath);
	}

	for (int i = 0; i < 3; i++) {
		//cout <<"총점: "<< gradeAry[0]->sum() << "   평점: " << gradeAry[0]->avr() << endl;
		printf("%d번째 학생 총점: %d, 평점: %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}

	for (int i = 0; i < 3; i++) {
		//cout << gradeAry[i]->getKo() << endl;     // 과목 총점, 평점
		//cout << gradeAry[i]->getEng() << endl;
		//cout << gradeAry[i]->getMath() << endl; 
		sum = sum + gradeAry[i].getKo();
		sum1 = sum1 + gradeAry[i].getEng();
		sum2 = sum2 + gradeAry[i].getMath();
	}

	//cout << sum << endl;
	//cout << sum1 << endl;
	//cout << sum2 << endl;

	printf("국어 총점: %d, 국어 평점: %.1lf", sum, sum / float(size(gradeAry)));   // float(size()) = 나누기 3.0
	printf("영어 총점: %d, 영어 평점: %.1lf", sum1, sum1 / float(size(gradeAry)));
	printf("수학 총점: %d, 수학 평점: %.1lf", sum2, sum2 / float(size(gradeAry)));

	for (int i = 0; i < 3; i++) {
		printf("객체 할당 소멸자 호출\n");
	}
	return 0;
}