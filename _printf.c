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
	};
	int i = 0, total = 0;

	/* handle format undefined case */
	if (!format)
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			unsigned long j;

			for (j = 0; j < (sizeof(format_map) / sizeof(format_t)); j++)
			{
				if (format_map[j].format == format[i + 1])
				{
					void *arg = va_arg(args, void *);

					total += format_map[j].print_func(&arg);
					i++;
					break;
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			total++;
			i++;
		}
	}

	va_end(args);
	return (total);
}

