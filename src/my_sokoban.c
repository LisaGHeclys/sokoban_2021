/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_sokoban
*/

#include "mysokoban.h"

void display(soko_t *soko)
{
    for (int i = 0; soko->array[i] != NULL; i ++) {
        for (int j = 0; soko->array[i][j] != '\0'; j ++)
            printw("%c", soko->array[i][j]);
        printw("\n");
    }
}

void display_resize(void)
{
    mvaddstr(LINES / 2, COLS / 2 - 10, "Please resize window");
}

soko_t *where_is_p(soko_t *soko)
{
    for (int i = 1; soko->array[i] != NULL; i ++)
        for (int j = 1; soko->array[i][j] != '\0'; j ++)
            (soko->array[i][j] == 'P') ? soko->x = j, soko->y = i,
            soko->player[0] = j, soko->player[1] = i: 0;
    return soko;
}

void win_or_lose(soko_t *soko)
{
    win(soko);
    lose(soko);
}

int my_sokoban(char *str)
{
    soko_t *soko = malloc(sizeof(soko_t));

    soko->num = is_a_map(str);
    soko = init(soko, str, is_a_map(str));
    soko = where_is_p(soko);
    initscr();
    noecho();
    keypad(stdscr, true);
    while (1) {
        clear();
        (LINES < soko->height || COLS < soko->length) ?
        display_resize() : display(soko);
        refresh();
        win_or_lose(soko);
        soko = movements(soko);
    }
    noecho();
    endwin();
    free_malloc(soko);
    return 0;
}