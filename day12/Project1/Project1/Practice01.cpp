/*
 - Parent class
  class Product : id, price, producer
 - Child class
  class Book : ISBN, author, title              // 978-89-001-0001-1
  class Handphone: model, RAM
  class Computer: model, cpu, RAM
 - ��ü ������ �迭�� �ϼ�: product[100]
 - string Ŭ���� ��� ����
 - ���Ϻ���(���ص� ��)

  ����ȭ��
  --------��ǰ���� ���α׷�--------
  1. ��ǰ�߰� 2. ��ǰ��� 3. ��ǰ�˻� 0. ����
  > 1 �Ǵ� 2 �Ǵ� 3�� ������ ��� 1 å 2 �ڵ��� 3 ��ǻ�� ���� ����� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ���, �Ǵ� �˻� ����ȴ�
*/

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	char* id;
	int price;
	int producer;
public:
	Product(const char* id, int price, int producer) {
		this->id = new char[strlen(id) + 1];
		strcpy(this->id, id);
		this->price = price;
		this->producer = producer;
	}
	~Product() {                  // �Ҹ���
		printf("�Ҹ��� ȣ��\n");
		delete[]id;
		
};

/*class Book
{
private:
	const int ISBN;
	int author;
	int title;
public:
	Book(const int aISBN, int aauthor, int atitle) : ISBN(aISBN) {
		author = aauthor;
		title = atitle;
	}
	void 
};*/
	
int main()
{
	Product *productary[100];

	return 0;
}