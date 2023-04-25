#include "main.h"

/**
 * handle_number - Prints an integer to stdout
 * @num: The integer to be printed
 *
 * Return: 1 if the integer was successfully printed.
*/
int handle_number(int num)
{
    if (num == -2147483648)
    {
        _putchar('-');
        _putchar('2');
        handle_number(147483648);
        return (1);
    }
    else if (num < 0)
    {
        _putchar('-');
        num = -num;
    }
    if (num >= 10)
    {
        handle_number(num / 10);
        handle_number(num % 10);
    }
    else if (num < 10)
    {
        _putchar(num + '0');
    }
    return (1);
}
