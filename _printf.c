#include "main.h"

/**
 * handle_str - prints a string to stdout
 *
 * @str: the string to print
 *
 * Return: the number of characters printed
 *         or the number of characters printed for "(null)"
 *         if str is NULL
 */
int handle_str(char *str)
{
	int count, i;

	if (str == NULL)
	{
		return (handle_str("(null)"));
	}
	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}

/**
 * handle_format - handles a conversion specifier in the format string
 *
 * @format: a pointer to a pointer to the current position in the format string
 * @args: the list of arguments for the format string
 *
 * Return: the number of characters printed
 */
int handle_format(const char **format, va_list args)
{
	int count;

	count = 0;
	switch (**format)
	{
		case 'c':
		{
			char c = va_arg(args, int);

			count += _putchar(c);
			(*format)++;
			break;
		}
		case 's':
		{
			char *str = va_arg(args, char *);

			count += handle_str(str);
			(*format)++;
			break;
		}
		case '%':
		{
			_putchar('%');
			count++;
			(*format)++;
			break;
		}
		default:
		{
			_putchar('%');
			count++;
			break;
		}
	}
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 *
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	va_start(args, format);
	count = 0;
	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_format(&format, args);
		} else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}
