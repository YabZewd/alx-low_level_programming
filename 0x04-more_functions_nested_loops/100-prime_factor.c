#include <stdio.h>
#include "main.h"
/**
 *main - prints largest prime number
 * Return: always 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int n = 612852475143;

	for ( i = 3; i < ; i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf ("%lu\n", n);
	return (0);
}
