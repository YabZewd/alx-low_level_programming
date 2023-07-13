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
	printf("size of char: %zu bytes" , sizeof(char));
	printf("size of int: %zu bytes" , sizeof(int));
	printf("size of float: %zu bytes" , sizeof(float));
	printf("size of long int: %zu bytes" , sizeof(long int));
	printf("size of long long int: %zu bytes" , sizeof(long long int));

	return (0);
}
