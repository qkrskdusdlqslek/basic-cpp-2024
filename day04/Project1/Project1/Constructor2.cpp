/*#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public: 
	SimpleClass(int n1 = 0, int n2 = 0)                        //���� ���� �ִ� ���¸� �Ű����� �ʱ�ȭ
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();             //�Լ��� ���� ����!(��¿� �ش��), �Լ��̸�:sc1/ �ڷ���:SimpleClass
	SimpleClass mysc = sc1();      //���Կ����ڸ� ���� ã��(������ ���� ������ �ؼ�!)
	mysc.ShowData();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);        //SimpleClassŸ���� ��ü ���� �ڵ�(�Է°� 2���� �ְ� ����) 
		return sc;                  //sc(��ü) ����
}
*/