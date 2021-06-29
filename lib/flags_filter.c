/*
** EPITECH PROJECT, 2020
** flags_filter
** File description:
** filter every flags of printf
*/

#include "../include/myprintf.h"

void flags_filter1(char *s, va_list list, int i)
{
    switch (s[i + 1]) {
    case ('i'):
    case ('d'):
    case ('c'):
    case ('s'):
        disp_stdarg(s, list, i);
        break;
    case ('%'):
        my_putchar('%');
        break;
    case ('S'):
        my_unstring(va_arg(list, char *));
        break;
    case ('p'):
        my_putstr("0x");
        convert_base(va_arg(list, unsigned int), "0123456789abcdef");
        break;
    }
    flags_filter2(s, list, i);
}

void flags_filter2(char *s, va_list list, int i)
{
    switch (s[i + 1]) {
    case ('b'):
        convert_base(va_arg(list, int), "01");
        break;
    case ('o'):
        convert_base(va_arg(list, unsigned int), "01234567");
        break;
    case ('u'):
        convert_base(va_arg(list, unsigned int), "0123456789");
        break;
    case ('x'):
        convert_base_hexa(va_arg(list, unsigned int), "0123456789abcdef");
        break;
    case ('X'):
        convert_base_hexa(va_arg(list, unsigned int), "0123456789ABCDEF");
        break;
    }
}
