/*
  5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균 구하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Grade
{
	char name[5];
	int kr;
	int math;
	int english;
public:
	Grade(const char* sname, int skr, int smath, int senglish)
	{
		strcpy(this->name, sname);
		kr = skr;
		math = smath;
		english = senglish;

	}
	void ShowData() const
	{
		cout << "이름: " << name << endl;
		cout << "국어점수: " << kr << endl;
		cout << "수학점수: " << math << endl;
		cout << "영어점수: " << english << endl;
	}
	class Add
	{
	public:
		int operator()(const int& n1, const int& n2, const int &n3)
		{
			return n1 + n2 + n3;
		}
	};
	class Average
	{
	public:
		double operator()(const double& e1, const double& e2, const double &e3)
		{
			return (e1 + e2 + e3) / 3;
		}
	};
};
	int main(void)
	{
		string name;
		cout << "이름을 입력하세요: " << endl;
		cin >> name;

		string kr;
		cout << "국어 점수: " << endl;
		cin >> kr;
		
		string math;
		cout << "수학 점수: " << endl;
		cin >> math;

		string english;
		cout << "영어 점수: " << endl;
		cin >> english;
	
		return 0;
}