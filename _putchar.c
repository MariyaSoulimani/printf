#include "main.h"
/**
 * _putchar - write char c to stdout.
 * @c: parametr.
 * Return: 1 success otherwise error .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
