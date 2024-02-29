/*class PermanentWorker
{
private:
	char name[100];
	int salary;           // �Ŵ� �����ؾ� �ϴ� �޿���
public:
	PermanentWorker(char* name, int money)
		: salary(money)
	{
		strcpy(this->name, name);
	}
	int Getpay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	PermanentWorker* empList[50];                  // PermanentWorker�� �ּ�, ��ü������ �迭 
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(PermanentWorker* emp)        // PermanentWorker ��ü�� �����͸� �޾Ƽ� empList �迭�� ����ִ´�. 
	{
		empList[empNum++] = emp;                  // ù��°�� ��ü�� ��������� 0���濡 ��
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();         // empList �迭�� ��Ұ�(��ü�ּ�)�� ���ؼ� ����Լ��� ���� (arrow ������)
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();         // arrow �����ڷ� ����Լ��� ����
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	// ���������� �������� ����� Ŭ������ ��ü����
	EmployeeHandler handler;

	// �������
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}
*/

//��ü ������ �������� ���� ��.. �ּҸ� ������ �� �ִ� ������ empList��

 