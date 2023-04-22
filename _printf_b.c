#include "main.h"

/**
 * _printf_b - print a character
 * @arg: int type param.
 *
 * Return: number of characters printed
 */

int _printf_b(void *arg)
{
	int num = *(int *)arg;
	int binary[sizeof(int) * 8];
	int temp, j, i = 0;

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}

	temp = i;
	for (j = temp - 1; j >= 0; j--)
	{
		_putchar(48 + binary[j]);
	}

	return (i);
}
