#include <iostream>
using namespace std;

int main(int argc, char *argv[])         // ����� int, (�Է�)
{
	printf("argc: %d\n", argc);
	for (int i = 0; i < argc; i++) {
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	printf("���α׷��� �����մϴ�.\n");

	return 0;
}