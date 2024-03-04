#include <iostream>
using namespace std;

// Ŭ���� Data�� �䳻 �� ����
typedef struct Data    
{ // ����ο��� �Ű����� �̸��� �����ص� �ȴ�.(Ÿ�Ը� ���� ��)
	int data;
	void (*ShowData)(Data*);      // ShowData ����Լ� ����(����ο� * ������ ������)-> �Լ� �̸��� ������ �ִ� �ּҴ�.
	void (*Add)(Data*, int);      // Add ����Լ� ����
} Data;

void ShowData(Data* THIS)             // ShowData ����Լ� ����
{
	cout << "Data: " << THIS->data << endl; 
}    
void Add(Data* THIS, int num)         // Add ����Լ� ����

{ 
	THIS->data += num; 
}                     

// ������ ����� main �Լ�
int main(void)
{
	Data obj1 = { 15, ShowData, Add };          // Data ����ü ���� obj1 ����� �ʱ�ȭ
	Data obj2 = { 7, ShowData, Add };           // Data ����ü ���� obj2 ����� �ʱ�ȭ

	obj1.Add(&obj1, 17);     // ����ü ������ �ּҸ� �������ְ� ����. 
	                         // Add��� ����Լ��� �Է��� ù��° ���ڴ� ������ Ÿ���� THIS�� ����
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);    // ������ Ÿ���� �����ͷ� ���� �� �ְ� ������� ����
	obj2.ShowData(&obj2);

	return 0;
}