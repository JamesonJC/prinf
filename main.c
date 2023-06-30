#include <stdio.h>
#include "main.h"

int main()
{
	int j = 123;
	int std_r, our_r;
	char cha = 'C';
	char *str = "Screen out";

	std_r = printf("100%% %c. s: %s i= %d", cha, str, j);
	printf("\nStandard return value: %d\n", std_r);
	our_r = _printf("100%% %c. s: %s i= %d", cha, str, j);
	printf("\nOur return value: %d\n", our_r);
	return (0);
}
