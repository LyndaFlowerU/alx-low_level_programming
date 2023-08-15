#include <stdio.h>
/**
 * main - A program that prints lines with various types of a computer
 * Return: 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int x;
	float y;

	printf("size of char:%lu byte(s)\n)", sizeof(a));
	printf("size of int:%lu byte(s)\n", sizeof(b));
	printf("size of long int:%d byte(s)\n", sizeof(c));
	printf("size of long long int:%d byte(s)\n", sizeof(x));
	printf("size of float:%d byte(s)\n", sizeof(y));
	return (0);
}
