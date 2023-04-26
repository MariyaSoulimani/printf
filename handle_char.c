#include "main.h"

/**
 * handle_char - Handles the 'c' format specifier
 * @args: The argument list containing the character to be printed
 *
 * Return: The number of characters printed
 */
int handle_char(va_list args)
{
	char c = va_arg(args, int);
	return _putchar(c);
}
