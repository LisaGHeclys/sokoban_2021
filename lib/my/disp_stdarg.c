/*
** EPITECH PROJECT, 2020
** disp_stdarg
** File description:
** disp all the arg (not the first one)
*/
#include <stdio.h>
#include <stdarg.h>
#include "../../include/myprintf.h"

void disp_stdarg(char *s, va_list list, int i)
{
    int d;
    char c;
    char *str;

    if (s[i] == '%' && (s[i + 1] == 'i' || s[i + 1] == 'd')) {
        d = va_arg(list, int);
        my_put_nbr(d);
    }
    if (s[i] == '%' && s[i + 1] == 'c') {
        c = (char) va_arg(list, int);
        my_putchar(c);
    }
    if (s[i] == '%' && s[i + 1] == 's') {
        str = va_arg(list, char *);
        my_putstr(str);
    }
}
