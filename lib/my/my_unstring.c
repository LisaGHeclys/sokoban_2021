/*
** EPITECH PROJECT, 2020
** my_unstring
** File description:
** detect if a string if it's not printable
*/
#include "../../include/myprintf.h"

int special_convert_base(int s1, char *s2)
{
    int result = 0;
    int base = my_strlen(s2);
    int unit = 1;

    for (; s1 != 0;) {
        result += (s2[s1 % base] - 48) * unit;
        unit *= 10;
        s1 /= base;
    }
    return (result);
}

void my_print_nbr(char c)
{
    int i = 0;
    int temp;

    c = special_convert_base((int) c, "01234567");
    temp = c;
    my_putchar('\\');
    for (; temp != 0; i ++)
        temp /= 10;
    i = 3 - i;
    if (i != 0) {
        for (; i != 0; i --)
            my_putchar('0');
    }
    my_put_nbr(c);
    return;
}

void my_unstring(char *str)
{
    for (int i = 0; str[i] != '\0'; i ++) {
        if (str[i] < 32 || str[i] >= 127)
            my_print_nbr(str[i]);
        else
            my_putchar(str[i]);
    }
    return;
}
