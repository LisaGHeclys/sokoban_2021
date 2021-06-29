/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** reload
*/

#include "mysokoban.h"

void reload_boxes(soko_t *soko)
{
    for (int i = 0; soko->array[i] != NULL; i++)
        for (int j = 0; soko->array[i][j] != 0; j++)
            soko->array[i][j] == 'X' ? soko->array[i][j] = ' ' : 0;
    for (int i = 0; i < soko->num; i ++)
        soko->array[soko->boxes[i][0]][soko->boxes[i][1]] = 'X';
}

void reload_locations(soko_t *soko)
{
    for (int i = 0; i < soko->num; i++)
        if (soko->array[soko->locations[i][0]][soko->locations[i][1]] == ' ')
            soko->array[soko->locations[i][0]][soko->locations[i][1]] = 'O';
}

void reload_player(soko_t *soko)
{
    soko->array[soko->y][soko->x] = ' ';
    soko->x = soko->player[0];
    soko->y = soko->player[1];
    soko->temp = ' ';
    soko->array[soko->y][soko->x] = 'P';
}

void reload(soko_t *soko)
{
    reload_player(soko);
    reload_boxes(soko);
    reload_locations(soko);
}