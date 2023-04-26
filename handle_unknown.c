#include "main.h"

/**
 * handle_unknown - Handles unknown format specifiers
 * @c: The unknown format specifier
 *
 * Return: The number of characters printed
 */
int handle_unknown(char c)
{
    _putchar('%');
    return c == '\0' ? 0 : _putchar(c);
}
