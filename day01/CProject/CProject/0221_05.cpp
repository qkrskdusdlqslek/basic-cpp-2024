/* 
  반복제어문: while

#include <iostream>

int main()
{
	int i = 1;
	int sum = 0;

	while (i <= 100) {
		// sum += i;
		sum = i + sum;
		i++; 
		if (i == 11) break;
	}
	std::cout << sum << std::endl;
	return 0;
}
*/