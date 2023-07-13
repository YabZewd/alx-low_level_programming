/*
 *the program prints out different sizes of data types
 */

#inlcude <stdio.h>

int main(void)
{
	printf("size of char: %zu bytes" , sizeof(char));
	printf("size of int: %zu bytes" , sizeof(int));
	printf("size of double: %zu bytes" , sizeof(double));
	printf("size of float: %zu bytes" , sizeof(float));
	printf("size of long int: %zu bytes" , sizeof(long int));
	printf("size of long long int: %zu bytes" , sizeof(long long int));

	return 0;
}
