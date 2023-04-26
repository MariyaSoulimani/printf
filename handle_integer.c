#include "main.h"

/**
 * handle_integer - Handles the 'd' and 'i' format specifiers
 * @args: The argument list containing the integer to be printed
 *
 * Return: The number of characters printed
 */
int handle_integer(va_list args)
{
    int num = va_arg(args, int);
    int count = num == 0 ? 1 : 0;

    if (num == -2147483648)
    {
        return _printf("%d", -214748364) + _printf("8");
    }
    if (num < 0)
    {
        count += _putchar('-');
        num = -num;
    }

    count += len_num(num);
    handle_number(num);
    return count;
}
