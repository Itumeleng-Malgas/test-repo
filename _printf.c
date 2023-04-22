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
	int format_map_size __attribute__ ((unused));
	va_list args;

	/* map each function with it's identifier */
	format_t format_map[] = {
		{'b', _printf_b},
	};

	/* handle format undefined case */
	if (!format)
		return (-1);

	format_map_size = sizeof(format_map) / sizeof(format_map[0]);
	va_start(args, format);

	if (format[0] == '%' && format_map[0].format == format[1])
	{
		void *arg = va_arg(args, void *);

		return (format_map[0].print_func(&arg));
	}

	return (-1);
}

