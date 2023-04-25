#include "main.h"
/**
 * _checker - checks and prints format specifiers
 * @args: list of arguments
 * @count: count of printed characters
 * @format: format specifier string
 * Return: count of printed characters
 */
int _checker(va_list args, int count, const char *format)
{
		if (*format == 's')
		{
			char *s = va_arg(args, char *);

			while (*s != '\0')
			{
			_putchar(*s);
			s++;
			count++;
			}
		}
		else if (*format == '%')
		{
			_putchar('%');
			count++;
		}
	else
	{
		_putchar(*format);
		count++;
	}
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				format++;
				_putchar(c);
				count++;
			}
		count = _checker(args, count, format);
		}
		else
		{
			if (*format)
			{
				_putchar(*format);
				count++;
			}
		}
		format++;
	}

	va_end(args);

	return (count);
}
