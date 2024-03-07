/*
  5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ���, �׸��� ���� ������ ����� ���Ͻÿ�.
  1. ��ü ������ �迭 ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Grade {
	char* name;        // �̸��� ������ �ּҷ� ����ϰڴ�.
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
		cout << "�̸�: " << name << ", ";
		cout << "��������: " << ko << ", ";
		cout << "��������: " << eng << ", ";
		cout << "��������: " << math << endl;
	}

	~Grade() {                  // �Ҹ���
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
	// Grade* gradeAry[3];       // ��ü ������ �迭
	Grade gradeAry[3];

	char name[20];
	int inKo;
	int inEng;
	int inMath;
	int len;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	
	// 1. �Է� �޴� �ڵ� �ۼ�
	for (int i = 0; i < 3; i++) {
		cout << "�̸� �Է�: ";
		cin >> name;
		cout << "���� ����: ";
		cin >> inKo;
		cout << "���� ����: ";
		cin >> inEng;
		cout << "���� ����: ";
		cin >> inMath;
		len = strlen(name) + 1;
		
		//cout << name << inKo << inEng << inMath << endl;

	// 2. ��ü ����: 5���� ��ü ����(�ϴ� 2�� ����), ��ü �迭 ��� or ��ü ������ �迭 ���
		gradeAry[i].SetStudentInfo(name, inKo, inEng, inMath);
	}

	for (int i = 0; i < 3; i++) {
		//cout <<"����: "<< gradeAry[0]->sum() << "   ����: " << gradeAry[0]->avr() << endl;
		printf("%d��° �л� ����: %d, ����: %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}

	for (int i = 0; i < 3; i++) {
		//cout << gradeAry[i]->getKo() << endl;     // ���� ����, ����
		//cout << gradeAry[i]->getEng() << endl;
		//cout << gradeAry[i]->getMath() << endl; 
		sum = sum + gradeAry[i].getKo();
		sum1 = sum1 + gradeAry[i].getEng();
		sum2 = sum2 + gradeAry[i].getMath();
	}

	//cout << sum << endl;
	//cout << sum1 << endl;
	//cout << sum2 << endl;

	printf("���� ����: %d, ���� ����: %.1lf", sum, sum / float(size(gradeAry)));   // float(size()) = ������ 3.0
	printf("���� ����: %d, ���� ����: %.1lf", sum1, sum1 / float(size(gradeAry)));
	printf("���� ����: %d, ���� ����: %.1lf", sum2, sum2 / float(size(gradeAry)));

	for (int i = 0; i < 3; i++) {
		printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
	}
	return 0;
}