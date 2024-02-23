/*#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char * MakeStrAdr(int len)
{
	char * str = (char*)malloc(sizeof(char) * len);         //C 타입: heap영역에 메모리 할당/ malloc 뒤에 크기를 적어야 함
	printf("char size: %llu￦n", sizeof(char));
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}
*/