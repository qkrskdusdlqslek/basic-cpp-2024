/*
  5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ��� ���ϱ�
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
		cout << "�̸�: " << name << endl;
		cout << "��������: " << kr << endl;
		cout << "��������: " << math << endl;
		cout << "��������: " << english << endl;
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
		cout << "�̸��� �Է��ϼ���: " << endl;
		cin >> name;

		string kr;
		cout << "���� ����: " << endl;
		cin >> kr;
		
		string math;
		cout << "���� ����: " << endl;
		cin >> math;

		string english;
		cout << "���� ����: " << endl;
		cin >> english;
	
		return 0;
}