#include <iostream>
using namespace std;

class Base
{
public:
	Base() {};
	~Base() {};
	virtual void func1() { cout << "Base::func1()" << endl; }   // 객체를 따라감(virtual 키워드: 객체 중심으로 접근함)
	virtual void func2() { cout << "Base::func2()" << endl; }
	 void func3() { cout << "Base::func3()" << endl; }          // 포인터를 따라감
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
	Base b;           // Base 타입의 객체
	Derived d;        // Derived 타입의 객체변수
	Base* pb = new Derived();    // Base 타입의 객체 포인터(* 표시)

	// virtual 사용하면 Derived::func1(), Base::func2()..
	pb->func1();      // 객체 포인터 타입만 접근된다. Ex. virtual 사용 안하면 Base::func1()..
	pb->func2();      
	pb->func3();

	cout << endl;
	Derived* pd = &d;     // Derived 객체의 주소를 동일한 타입으로 집어넣고 있음
	pd->func1();
	pd->func2();
	pd->func3();
	pd->func4();

	delete pb;       

	return 0;
}