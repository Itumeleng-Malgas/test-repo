#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: character to be printed
 */

void _putchar(char c)
{
	write(1, &c, sizeof(c));
}
