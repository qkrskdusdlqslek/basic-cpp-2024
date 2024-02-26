/*#include <iostream>
using namespace std;

class MyClass {
	int num;

public:

	MyClass() {                                            // 입력이 없는 생성자(default 생성자)
		cout << "생성자 호출: MyClass()" << endl;        
		num = 10;
	}
	MyClass(int anum) {                   // 생성자 오버로딩
		cout << "생성자 호출: MyClass(int )" << endl;     // 입력이 하나 있는 생성자
		num = anum;       
	}
	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};

int main()
{
	// MyClass *m = new MyClass();         //heap 영역에 생성자를 생성하기 위해서 new 키워드를 사용함

	MyClass m1;                            // 객체를 생성하는 코드, 생성자가 자동으로 호출된다
	m1.MyClassInfo();                     
	MyClass m2(20);
	m2.MyClassInfo();

	// MyClass m2();                      // m2라는 메서드를 호출중, 이 형태는 그냥 함수 호출하는 형식

	return 0;
}
*/