/*#include <iostream>
using namespace std;

class AA {
	int a;
	int b;
public:
	AA(int a, int b) {
		this->a = a;    //매게변수 이름이 같을 때 this 포인터를 사용
		this->b = b;
	}
	void AAInfo() {
		cout << a << " "<< b << endl;

	}
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();
	                  // 복사 생성자를 정의하지 않으면, 디폴트 복사 생성자가 자동으로 삽입됨.
	AA obj2(obj1);    // 앞에 있는 obj1을 복사 -> 복사생성자 
	obj2.AAInfo();

	return 0;
}
*/