/*
  C-Style 문자열 
  문자열은 마지막에 널문자가 붙는다.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;    // = a
	cout << "================================" << endl;
	char ary[6] = { 'a', 'b', 'c', 'd', 'e' };      // 문자열 타입의 배열 선언
	cout << ary << endl;
	printf("=================================\n");
	char ary1[] = { 'a', 'b', 'c', '\0', 'e' };       // \0은 문자열의 끝을 알리는 문자(널문자)
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;         // sizeof는 전체 문자 크기 구해짐
	cout << strlen(ary1) << endl;         // strlen은 널문자 앞까지의 크기만 구해짐
	printf("=================================\n");
	char str[] = "string";                // 자동으로 널문자가 붙는다.  (stack영역에 만들어짐)
	cout << str << endl;
	cout << sizeof(str) << endl;          // 7(널문자가 포함된 크기가 리턴된다.)
	cout << strlen(str) << endl;          // 6(순수하게 문자열 크기만 리턴된다.)
	str[0] = 'S';                         // 대문자로 바꿈
	cout << str << endl;
	printf("=================================\n");
	const char* pstr = "STRING";          // 변경이 안되기 때문에 const라는 키워드를 붙임 (read-only인 데이터 영역에 만들어짐)
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;         // 8(포인터 변수의 크기)
	cout << strlen(pstr) << endl;
   // pstr[0] = 's';                       문자열을 포인터로 사용하는 경우는 변경 불가

	printf("=================================\n");
	printf("=================================\n");

	/*
	C++ - style : heap 영역에 저장
	*/
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	// cout << strlen(s) << endl;      사용 불가(const char 포인터 타입이라서..)
	cout << s.size() << endl;          // 45번을 대체해서 사용 가능

	string s1 = "Honggildong";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;
	cout << s1.size() << endl;


	string s2 = "Hi ";
	string s3 = "you";

	string s4 = s2 + s3;
	cout << s4 << endl;

	return 0;
}
