#include <stdlib.h>
#include "main.h"

/**
 * _printf_s - prints a string
 * @arg: string
 *
 * Return: number of printed characters
 */

int _printf_s(void *arg)
{
	char *str = *(char **)arg;
	int i = 0;

	if (str == NULL)
		return (-1);

	while (*str != '\0')
	{
		_putchar(*str++);
		i++;
	}

	return (i);
}
