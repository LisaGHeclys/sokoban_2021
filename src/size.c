/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** size
*/

#include "mysokoban.h"

void height(soko_t *soko)
{
    soko->height = 0;
    for (; soko->array[soko->height] != NULL; soko->height ++);
}

void length(soko_t *soko)
{
    int j = 0;

    soko->length = 0;
    for (int i = 0; soko->array[i] != NULL; i ++) {
        for (; soko->array[i][j] != 0; j ++);
        if (j > soko->length)
            soko->length = j;
    }
}