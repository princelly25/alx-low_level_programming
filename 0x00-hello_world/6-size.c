#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * return: 0
*/
int main(void)
{
	char a;
	int b;
	int long c;
	int long long d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a int long: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int long long: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
