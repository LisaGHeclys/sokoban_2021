/*
** EPITECH PROJECT, 2020
** myputstrprintf.c
** File description:
** print the part before the %
*/
#include "../../include/myprintf.h"

int my_putstrprintf(char *str)
{
    for (int i = 0; str[i] != '\0'; i ++) {
        if (str[i] == '%' && str[i + 1] != ' ')
            i += 3;
        my_putchar(str[i]);
    }
    return (0);
}
