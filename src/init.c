/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init
*/

#include "mysokoban.h"

void free_malloc(soko_t *soko)
{
    for (int i = 0; i < soko->num; i ++) {
        free(soko->locations[i]);
        free(soko->boxes[i]);
    }
    free(soko->locations);
    free(soko->boxes);
    free(soko->player);
    free(soko->array);
    free(soko);
}

int locations(soko_t *soko, int i, int j, int transfer)
{
    if (soko->array[i][j] == 'O') {
        soko->locations[transfer][0] = i;
        soko->locations[transfer][1] = j;
        transfer ++;
    }
    return transfer;
}

int boxes(soko_t *soko, int i, int j, int transfer)
{
    if (soko->array[i][j] == 'X') {
        soko->boxes[transfer][0] = i;
        soko->boxes[transfer][1] = j;
        transfer ++;
    }
    return transfer;
}

soko_t *coord(soko_t *soko)
{
    int transfer = 0;
    int exchanger = 0;

    for (int i = 0; soko->array[i] != NULL; i ++)
        for (int j = 0; soko->array[i][j] != 0; j ++) {
            transfer = boxes(soko, i, j, transfer);
            exchanger = locations(soko, i, j, exchanger);
        }
    return soko;
}

soko_t *init(soko_t *soko, char *str, int num)
{
    soko->array = my_str_to_word_array(str);
    soko->boxes = malloc(sizeof(int *) * num);
    soko->locations = malloc(sizeof(int *) * num);
    soko->player = malloc(sizeof(int) * 2);
    for (int i = 0; i < num; i ++) {
        soko->boxes[i] = malloc(sizeof(int) * 2);
        soko->locations[i] = malloc(sizeof(int) * 2);
    }
    soko = coord(soko);
    soko->temp = ' ';
    soko->temp_box = ' ';
    height(soko);
    length(soko);
    return soko;
}