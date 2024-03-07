/*
  C-Style ���ڿ� 
  ���ڿ��� �������� �ι��ڰ� �ٴ´�.
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
	char ary[6] = { 'a', 'b', 'c', 'd', 'e' };      // ���ڿ� Ÿ���� �迭 ����
	cout << ary << endl;
	printf("=================================\n");
	char ary1[] = { 'a', 'b', 'c', '\0', 'e' };       // \0�� ���ڿ��� ���� �˸��� ����(�ι���)
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;         // sizeof�� ��ü ���� ũ�� ������
	cout << strlen(ary1) << endl;         // strlen�� �ι��� �ձ����� ũ�⸸ ������
	printf("=================================\n");
	char str[] = "string";                // �ڵ����� �ι��ڰ� �ٴ´�.  (stack������ �������)
	cout << str << endl;
	cout << sizeof(str) << endl;          // 7(�ι��ڰ� ���Ե� ũ�Ⱑ ���ϵȴ�.)
	cout << strlen(str) << endl;          // 6(�����ϰ� ���ڿ� ũ�⸸ ���ϵȴ�.)
	str[0] = 'S';                         // �빮�ڷ� �ٲ�
	cout << str << endl;
	printf("=================================\n");
	const char* pstr = "STRING";          // ������ �ȵǱ� ������ const��� Ű���带 ���� (read-only�� ������ ������ �������)
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;         // 8(������ ������ ũ��)
	cout << strlen(pstr) << endl;
   // pstr[0] = 's';                       ���ڿ��� �����ͷ� ����ϴ� ���� ���� �Ұ�

	printf("=================================\n");
	printf("=================================\n");

	/*
	C++ - style : heap ������ ����
	*/
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	// cout << strlen(s) << endl;      ��� �Ұ�(const char ������ Ÿ���̶�..)
	cout << s.size() << endl;          // 45���� ��ü�ؼ� ��� ����

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
