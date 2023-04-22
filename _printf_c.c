#include "main.h"

/**
 * _printf_c - prints a character
 * @arg: a character to print.
 * 
 * Return: number of character printed
 */

int _printf_c(void *arg)
{
	char c = *(char *)arg;

	_putchar(c);
	return (1);
}
