#include <stdarg.h>
#include "main.h"

/**
 * _printf - replica of std printf
 * @format: identifier string.
 *
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	format_t format_map[] = {
		{'b', _printf_b},
		{'c', _printf_c},
		{'s', _printf_s},
	};
	int map_size, result;

	/* handle format undefined case */
	if (!format)
		return (-1);

	va_start(args, format);
	map_size = sizeof(format_map) / sizeof(format_t);

	result = _printer(format, format_map,map_size, args);
	va_end(args);

	return (result);
}

