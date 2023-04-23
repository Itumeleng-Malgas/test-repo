#include <stdarg.h>
#include "main.h"

/**
 * _printer - used to call appropriate print function given the identifier.
 * @format: formatted string
 * @format_map: an array of format_t struct
 * @map_size: size of format_map array
 * @args: va_list
 *
 * Return: number of characters printed
 */

int _printer(const char *format, const format_t *format_map, int map_size,
		va_list args)
{
	int i = 0, total = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			int j;

			/* Handle %% case */
			if (format[i + 1] == '%')
				_putchar('%');

			for (j = 0; j < map_size; j++)
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

	return (total);
}
