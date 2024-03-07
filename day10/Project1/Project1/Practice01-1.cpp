#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>  
#include <cstring>    // strcpy 함수를 사용하기 위해 필요
using namespace std;

class Grade
{
private:
    char name[20];
    int kr;
    int math;
    int english;
public:
    Grade()
    {
        kr = 0;
        math = 0;
        english = 0;
    }
    void ShowData(const char n[], int k, int m, int e)
    {
        strcpy(name, n);
        kr = k;
        math = m;
        english = e;
    }
    // 이름을 반환하는 함수
    const char* getName() const {
        return name;
    }
    // 국어점수를 반환하는 함수
    int getKoreanScore() const {
        return kr;
    }
    // 수학점수를 반환하는 함수
    int getMathScore() const {
        return math;
    }
    // 영어점수를 반환하는 함수
    int getEnglishScore() const {
        return english;
    }
};

int main()
{
    const int Num_STUDENTS = 5;
    Grade students[Num_STUDENTS];

    // 사용자로부터 5명의 학생 이름과 3과목의 점수를 입력받음
    cout << "5명의 학생 이름과 세 과목의 점수를 입력하세요" << endl;
    for (int i = 0; i < Num_STUDENTS; i++) {
        string name;
        cout << "학생" << i + 1 << "이름: ";
        cin >> name;
        int kr, math, english;    // 정수로 입력 받아야 함
        cout << name << "의 국어, 수학, 영어 점수를 입력하세요: ";
            cin >> kr >> math >> english;
        students[i].ShowData(name.c_str(), kr, math, english);
        // c_str() 함수로 문자열 c 스타일 문자열로 변환
    }
    // 각 학생의 이름과 점수 출력
    cout << "\n 각 학생의 점수: " << endl;
    for (int i = 0; i < Num_STUDENTS; i++)
    {
        cout << "이름: " << students[i].getName()
            << ",국어: " << students[i].getKoreanScore()
            << ", 수학: " << students[i].getMathScore()
            << ", 영어: " << students[i].getEnglishScore() << endl;
    }
    return 0;
}