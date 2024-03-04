#include <iostream>
using namespace std;

class Base
{
public:
	Base() {};
	~Base() {};
	virtual void func1() { cout << "Base::func1()" << endl; }   // ��ü�� ����(virtual Ű����: ��ü �߽����� ������)
	virtual void func2() { cout << "Base::func2()" << endl; }
	 void func3() { cout << "Base::func3()" << endl; }          // �����͸� ����
};

class Derived : public Base
{
public:
	void func1() { cout << "Derived::func1()" << endl; }
	void func3() { cout << "Derived::func2()" << endl; }
	void func4() { cout << "Derived::func3()" << endl; }
};
int main()
{
	Base b;           // Base Ÿ���� ��ü
	Derived d;        // Derived Ÿ���� ��ü����
	Base* pb = new Derived();    // Base Ÿ���� ��ü ������(* ǥ��)

	// virtual ����ϸ� Derived::func1(), Base::func2()..
	pb->func1();      // ��ü ������ Ÿ�Ը� ���ٵȴ�. Ex. virtual ��� ���ϸ� Base::func1().. 
	pb->func2();      
	pb->func3();

	cout << endl;
	Derived* pd = &d;     // Derived ��ü�� �ּҸ� ������ Ÿ������ ����ְ� ����
	pd->func1();
	pd->func2();
	pd->func3();
	pd->func4();

	delete pb;       

	return 0;
}