/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** is_the_right_map
*/

#include "mysokoban.h"

int same_x_and_o(char *str)
{
    int o = 0;
    int x = 0;
    int p = 0;

    for (int i = 0; str[i] != '\0'; i ++) {
        str[i] == 'O' ? o ++ : 0;
        str[i] == 'X' ? x ++ : 0;
        str[i] == 'P' ? p ++ : 0;
    }
    if (o != x || p != 1)
        exit (84);
    if (o == 0)
        exit (0);
    return o;
}

int my_char(char c)
{
    if (c == 'P' || c == 'X' || c == 'O')
        return 0;
    else if (c == '#' || c == ' ' || c == '\n')
        return 0;
    else
        return 1;
}

int is_a_map(char *str)
{
    int num = 0;

    for (int i = 0; str[i] != '\0'; i ++)
        if (my_char(str[i]) != 0) {
            exit (84);
        }
    num = same_x_and_o(str);
    return num;
}