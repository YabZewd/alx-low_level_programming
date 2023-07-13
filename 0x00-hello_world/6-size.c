/*
 * File name is 6-size.c
 */

#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: 0.
 */

int main(void)
{
	char a;
	int b;
	float c;
	long int d;
	long long int e;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
