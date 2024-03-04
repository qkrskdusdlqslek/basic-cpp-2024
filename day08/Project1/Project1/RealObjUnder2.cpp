#include <iostream>
using namespace std;

// 클래스 Data를 흉내 낸 영역
typedef struct Data    
{ // 선언부에는 매개변수 이름이 생략해도 된다.(타입만 오면 됨)
	int data;
	void (*ShowData)(Data*);      // ShowData 멤버함수 선언(선언부에 * 있으면 포인터)-> 함수 이름을 가지고 있는 주소다.
	void (*Add)(Data*, int);      // Add 멤버함수 선언
} Data;

void ShowData(Data* THIS)             // ShowData 멤버함수 정의
{
	cout << "Data: " << THIS->data << endl; 
}    
void Add(Data* THIS, int num)         // Add 멤버함수 정의

{ 
	THIS->data += num; 
}                     

// 적절히 변경된 main 함수
int main(void)
{
	Data obj1 = { 15, ShowData, Add };          // Data 구조체 변수 obj1 선언과 초기화
	Data obj2 = { 7, ShowData, Add };           // Data 구조체 변수 obj2 선언과 초기화

	obj1.Add(&obj1, 17);     // 구조체 변수에 주소를 전달해주고 있음. 
	                         // Add라는 멤버함수에 입력의 첫번째 인자는 동일한 타입의 THIS에 저장
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);    // 데이터 타입의 포인터로 받을 수 있게 만들어져 있음
	obj2.ShowData(&obj2);

	return 0;
}