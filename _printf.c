#include "main.h"
/**
 * _printf - produces output according to a format
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * @format: format string containing the characters and the specifiers
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*print_func)(va_list, flags_t *), p = 0;
	const char *p_format;
	va_list args;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p_format = format; *p_format; p_format++)
{
	if (*p_format == '%')
	{
		p_format++;
		if (*p_format == '%')
	{
		count += _putchar('%');
		continue;
}
		while (get_flag(*p_format, &flags))
		p++;
	print_func = get_print(*p_format);
		count += (print_func)
		? print_func(args, &flags)
		: _printf("%%%c", *p_format);
	}
	else
	count += _putchar(*p_format);
}
	va_end(args);
return (count);
}
