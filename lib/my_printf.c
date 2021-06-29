/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** follow the man printf
*/
#include "../include/myprintf.h"

int my_printf(char *str, ...)
{
    va_list list;

    va_start(list, str);
    for (int i = 0; str[i] != '\0';) {
        if (str[i] == '%' && str[i + 1] != ' ') {
            flags_filter1(str, list, i);
            i += 2;
        } else {
            my_putchar(str[i]);
            i += 1;
        }
    }
    va_end(list);
    return (0);
}
