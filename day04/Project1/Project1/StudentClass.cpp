//�й�, �̸�, ����, ����
/*#include <iostream>
using namespace std;

class StudentClass
{
public:                           //**�߿�** (private�� Ȯ���ϰ� ���ϱ�)
    const int ID;                 // �й��� ����Ǹ� X �׷��� const�� ����-> �й��� ���ȭ(��� ���� �� �ݵ�� �ʱ�ȭ ���Ѿ� ��)
	char name[20];                // ���ڹ迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
	char major[20];
	int age;
	// ���ڿ��� �ּ��̱� ������ ������ ������ �־ ����Ѵ�. - ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	// ��� �̴ϼȶ������ ��ü ������ �ʱ�ȭ ���� �ʴ� ������� �ʱ�ȭ �� �� �����. 
	// �� ��ü������ ������� �̸� �ʱ�ȭ�Ǵ� ����鿡�� �ʱ�ȭ 
	StudentClass(int aID, const char* pname, const char* pmajor, int aage) : ID(aID) { //��� �̴ϼȶ�����
	//	ID = aID;
		strcpy_s(name, pname);      // ���ڹ迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
		strcpy_s(major, pmajor);
		age = aage;
	}

	void ShowInfo() const {
		cout << "�й� -> " << ID << endl;        // �й� ���
		cout << "�̸� -> " << name << endl;      // �̸� ���
		cout << "���� -> " << major << "��" << endl;     // ���� ���
		cout << "���� -> " << age << "��" << endl;       // ���� ���
	}
};

int main()
{
	StudentClass s1(1, "ȫ�浿", "IT", 27);          // ��ü�� �����ϸ� �����ڰ� ȣ��
	s1.ShowInfo();

	return 0;
}
*/