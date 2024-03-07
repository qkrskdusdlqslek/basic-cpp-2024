/*
  5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ���, �׸��� ���� ������ ����� ���Ͻÿ�.
  1. ��ü ������ �迭 ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

class Grade {
	char* name;        // �̸��� ������ �ּҷ� ����ϰڴ�.
	int ko;
	int eng;
	int math;
public:
	Grade(const char* name, int ko, int eng, int math) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->ko = ko;
		this->eng = eng;
		this->math = math;
	}
	~Grade() {                  // �Ҹ���
		printf("�Ҹ��� ȣ��\n");
		delete[] name;
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

	int sum(){
		int sum = ko + eng + math;
		return sum;
	}
	double avr() {
		double avr = sum() / 3.0;
		return avr;
	}
};

int main()
{
	// Grade* gradeAry[3];       // ��ü ������ �迭

	char name[20];
	int inKo;
	int inEng;
	int inMath;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	int num = 0;
	
	cout << "����ó�� �л���: " << endl;
	cin >> num;

	vector<Grade*> gradeAry(num);

	// 1. �Է� �޴� �ڵ� �ۼ�
	for(int i=0; i<num; i++) {       // vector ����� �� i<3 ��� i<num ����
	cout << "�̸� �Է�: ";
	cin >> name;
	cout << "���� ����: ";
	cin >> inKo;
	cout << "���� ����: ";
	cin >> inEng;
	cout << "���� ����: ";
	cin >> inMath;

	//cout << name << inKo << inEng << inMath << endl;
	
// 2. ��ü ����: 5���� ��ü ����(�ϴ� 2�� ����), ��ü �迭 ��� or ��ü ������ �迭 ���
	gradeAry[i]= new Grade(name, inKo, inEng, inMath);
	}
	
	for(int i=0; i<num; i++){
	//cout <<"����: "<< gradeAry[0]->sum() << "   ����: " << gradeAry[0]->avr() << endl;
		printf("%d��° �л� ����: %d, ����: %.1lf\n",i+1, gradeAry[i]->sum(), gradeAry[i]->avr());
	}
	
	for (int i = 0; i < num; i++) {
	/*cout << gradeAry[i]->getKo() << endl;     // ���� ����, ����
	cout << gradeAry[i]->getEng() << endl;
	cout << gradeAry[i]->getMath() << endl; */
		sum = sum + gradeAry[i]->getKo();
		sum1 = sum1 + gradeAry[i]->getEng();
		sum2 = sum2 + gradeAry[i]->getMath();
	}
	//cout << sum << endl;
	//cout << sum1 << endl;
	//cout << sum2 << endl;
	printf("���� ����: %d, ���� ����: %.1lf", sum, sum / float(size(gradeAry)));   // float(size()) = ������ 3.0
	printf("���� ����: %d, ���� ����: %.1lf", sum1, sum1 / float(size(gradeAry)));
	printf("���� ����: %d, ���� ����: %.1lf", sum2, sum2 / float(size(gradeAry)));

	for(int i=0; i<num; i++){
		printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
	delete gradeAry[i];
	}

	return 0;
}