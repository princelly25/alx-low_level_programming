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

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of a int: %lu byte(s)\n", sizeof(b));
	printf("Size of a int long: %lu byte(s)\n", sizeof(c));
	printf("Size of a int long long: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
