/*
 - Parent class
  class Product : id, price, producer
 - Child class
  class Book : ISBN, author, title              // 978-89-001-0001-1
  class Handphone: model, RAM
  class Computer: model, cpu, RAM
 - 객체 포인터 배열로 완성: product[100]
 - string 클래스 사용 가능
 - 파일분할(안해도 됨)

  메인화면
  --------상품관리 프로그램--------
  1. 상품추가 2. 상품출력 3. 상품검색 0. 종료
  > 1 또는 2 또는 3을 선택한 경우 1 책 2 핸드폰 3 컴퓨터 선택 목록을 띄워 해당 상품을 선택한 후에 추가, 출력, 또는 검색 실행된다
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
	~Product() {                  // 소멸자
		printf("소멸자 호출\n");
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