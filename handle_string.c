#include "main.h"

/**
 * handle_string - Prints a string to stdout
 * @str: Pointer to the string to be printed
 *
 * Return: The number of characters printed.
*/
int handle_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		handle_string("(null)");
		return (6);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
