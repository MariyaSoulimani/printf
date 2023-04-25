#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* _printf */
int _printf(const char *format, ...);

/* write_funcs */
int _putchar(char c);

/* print_string */
int handle_string(char *str);

/* print_nums */
int len_num(int num);
int handle_number(int num);

#endif
