#include "main.h"

/**
 * len_num - Computes the length of an integer
 * @num: The integer to be measured
 *
 * Return: The number of digits in the integer.
*/
int len_num(int num)
{
    if (num == 0)
        return (0);
    return (1 + len_num(num / 10));
}
