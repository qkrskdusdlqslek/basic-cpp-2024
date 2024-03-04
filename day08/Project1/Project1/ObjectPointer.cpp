#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student      // 3���� 
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{

	//Student * ptr0 = new Student();          ������ Ÿ������ ����ϴ� ���� ��Ģ�̴�.
	/*
	�θ� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� �ִ�.
	������ �ڽ�Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų �� ����.
	�׸��� ������ ��ü �������� Ÿ���� ������.
	*/
	Person* ptr1 = new Student();      //          
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();                         // �����͸� ���� ������ arrow������ ���
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;

	return 0;
}
