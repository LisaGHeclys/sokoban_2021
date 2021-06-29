/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** movement
*/

#include "mysokoban.h"

void player(soko_t *soko, int i, int j)
{
    soko->array[soko->y][soko->x] = ' ';
    for (int i = 0; i < soko->num; i ++)
        if (soko->y == soko->locations[i][0] &&
        soko->x == soko->locations[i][1])
            soko->array[soko->y][soko->x] = 'O';
    soko->array[soko->y + i][soko->x + j] = 'P';
    soko->y += i;
    soko->x += j;
}

soko_t *direction(soko_t *soko, int i, int j)
{
    if (soko->array[soko->y + i][soko->x + j] == 'X') {
        if (soko->array[soko->y + i * 2][soko->x + j * 2] == 'X' ||
        soko->array[soko->y + i * 2][soko->x + j * 2] == '#')
            return soko;
        else
            soko->array[soko->y + i * 2][soko->x + j * 2] = 'X';
    }
    if (soko->array[soko->y + i][soko->x + j] == '#');
    else
        player(soko, i, j);
    return soko;
}

soko_t *movements(soko_t *soko)
{
    int c = getch();

    switch (c) {
    case 261:
        direction(soko, 0, 1);
        break;
    case 260:
        direction(soko, 0, -1);
        break;
    case 259:
        direction(soko, -1, 0);
        break;
    case 258:
        direction(soko, 1, 0);
        break;
    case 32:
        reload(soko);
        break;
    }
    return soko;
}