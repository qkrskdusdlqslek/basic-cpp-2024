/*
  �迭�� ǥ����
*/
#include <iostream>

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };             // int�� �迭����
	int *parr = arr;                            // �迭�� �̸��� �ּ��̴�.

	printf("arr �ּ�: %p\n", arr);
	printf("arr ũ��: %u\n", sizeof(arr));      // int ũ�� 4 x �� ���� 5 = 20 byte

	printf("arr[0] �ּ�: %p\n", &arr[0]);       // & : �ּ� ������ ���, �迭�� �ּҿ� �迭�� ù��° �� �ּҴ� ����.
	printf("arr[1] �ּ�: %p\n", &arr[1]);
	printf("arr + 1: %p\n", arr + 1);           // 1������ �ּҿ� arr + 1�� �ּҴ� ����.
	//=======================================================================

	printf("parr �ּ�: %p\n", &parr);
	printf("parr ������: %p\n", parr);          // �迭 arr�� �ּҸ� �����ϰ� �ִ�.
	printf("parr + 1: %p\n", parr + 1);         // �迭 1������ �ּҿ� ����. 
	printf("parr[0]: %d\t *pa: %d\n", parr[0], *parr);      // %d�� �������·� ����ϰ� ���� �� ���, %p�� �ּ����·� ���
	printf("parr[0]: %d *pa: %d arr[0]: %d\n", parr[0], *parr, arr[0]);

	return 0;
}