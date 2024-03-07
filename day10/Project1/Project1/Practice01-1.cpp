#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>  
#include <cstring>    // strcpy �Լ��� ����ϱ� ���� �ʿ�
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
    // �̸��� ��ȯ�ϴ� �Լ�
    const char* getName() const {
        return name;
    }
    // ���������� ��ȯ�ϴ� �Լ�
    int getKoreanScore() const {
        return kr;
    }
    // ���������� ��ȯ�ϴ� �Լ�
    int getMathScore() const {
        return math;
    }
    // ���������� ��ȯ�ϴ� �Լ�
    int getEnglishScore() const {
        return english;
    }
};

int main()
{
    const int Num_STUDENTS = 5;
    Grade students[Num_STUDENTS];

    // ����ڷκ��� 5���� �л� �̸��� 3������ ������ �Է¹���
    cout << "5���� �л� �̸��� �� ������ ������ �Է��ϼ���" << endl;
    for (int i = 0; i < Num_STUDENTS; i++) {
        string name;
        cout << "�л�" << i + 1 << "�̸�: ";
        cin >> name;
        int kr, math, english;    // ������ �Է� �޾ƾ� ��
        cout << name << "�� ����, ����, ���� ������ �Է��ϼ���: ";
            cin >> kr >> math >> english;
        students[i].ShowData(name.c_str(), kr, math, english);
        // c_str() �Լ��� ���ڿ� c ��Ÿ�� ���ڿ��� ��ȯ
    }
    // �� �л��� �̸��� ���� ���
    cout << "\n �� �л��� ����: " << endl;
    for (int i = 0; i < Num_STUDENTS; i++)
    {
        cout << "�̸�: " << students[i].getName()
            << ",����: " << students[i].getKoreanScore()
            << ", ����: " << students[i].getMathScore()
            << ", ����: " << students[i].getEnglishScore() << endl;
    }
    return 0;
}