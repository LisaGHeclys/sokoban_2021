/*
** EPITECH PROJECT, 2020
** convert_base
** File description:
** convert to every base i want
*/
#include <stdlib.h>
#include "../../include/myprintf.h"

void convert_base(int s1, char *s2)
{
    int result = 0;
    int base = my_strlen(s2);
    int unit = 1;

    for (; s1 != 0;) {
        result += (s2[s1 % base] - 48) * unit;
        unit *= 10;
        s1 /= base;
    }
    my_put_nbr(result);
}

void convert_base_hexa(int s1, char *s2)
{
    char *result = malloc(sizeof(char) * my_intlen(s1));
    int base = my_strlen(s2);

    for (int i = 0; s1 != 0; i ++) {
        result[i] = s2[s1 % base];
        s1 /= base;
    }
    my_revstr(result);
    my_putstr(result);
}
