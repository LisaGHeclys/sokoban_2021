/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** win
*/

#include "mysokoban.h"

void win(soko_t *soko)
{
    int win = 0;

    for (int i = 0; i < soko->num; i ++)
        if (soko->array[soko->locations[i][0]][soko->locations[i][1]] == 'X')
            win ++;
    if (win == soko->num) {
        endwin();
        exit (0);
    }
}