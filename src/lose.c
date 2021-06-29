/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** lose
*/

#include "mysokoban.h"

void end(void)
{
    endwin();
    exit (1);
}

int my_cmp(char c)
{
    char *str = "#X";

    for (int i = 0; i < 2; i ++)
        if (c == str[i])
            return 1;
    return 0;
}

int check_box(soko_t *soko, int i, int j, int result)
{
    int horizontale = 0;
    int verticale = 0;

    if ((my_cmp(soko->array[i + 1][j]) == 1) ||
    (my_cmp(soko->array[i - 1][j]) == 1))
        horizontale = 1;
    if ((my_cmp(soko->array[i][j + 1]) == 1) ||
    (my_cmp(soko->array[i][j - 1]) == 1))
        verticale = 1;
    if (horizontale == 1 && verticale == 1)
        result ++;
    return result;
}

void lose(soko_t *soko)
{
    int result = 0;

    for (int i = 0; soko->array[i] != NULL; i ++)
        for (int j = 0; soko->array[i][j] != 0; j ++)
            soko->array[i][j] == 'X' ? result = check_box(soko, i, j, result)
            : 0;
    if (result == soko->num)
        end();
}