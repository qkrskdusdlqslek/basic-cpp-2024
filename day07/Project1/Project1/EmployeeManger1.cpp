/*class PermanentWorker
{
private:
	char name[100];
	int salary;           // 매달 지불해야 하는 급여액
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
	PermanentWorker* empList[50];                  // PermanentWorker의 주소, 객체포인터 배열 
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(PermanentWorker* emp)        // PermanentWorker 객체의 포인터를 받아서 empList 배열에 집어넣는다. 
	{
		empList[empNum++] = emp;                  // 첫번째로 객체를 집어넣으면 0번방에 들어감
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();         // empList 배열의 요소값(객체주소)을 통해서 멤버함수에 접근 (arrow 연산자)
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();         // arrow 연산자로 멤버함수에 접근
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
	// 직원관리를 목적으로 설계된 클래스의 객체새성
	EmployeeHandler handler;

	// 직원등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}
*/

//객체 생성은 힙영역에 저장 중.. 주소를 저장할 수 있는 영역은 empList임

 