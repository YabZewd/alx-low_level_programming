#include "main.h"

/**
 * main -  a function that checks for a digit 0-9
 * @c: accepts character input
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
