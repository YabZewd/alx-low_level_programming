#include "main.h"
#include <unistd.h>
/* putchar - writes character to stdout
 * @c : the character to print 
 *
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
