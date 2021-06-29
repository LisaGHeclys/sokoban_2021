/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** mysokoban
*/

#ifndef MYSOKOBAN_H_
#define MYSOKOBAN_H_

//includes
#include "myprintf.h"
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

//struct
typedef struct sokoban
{
    char **array;
    int **locations;
    int **boxes;
    int *player;
    char temp;
    char temp_box;
    int x;
    int y;
    int num;
    int length;
    int height;
}soko_t;

//sokoban
int my_sokoban(char *str);
char **my_str_to_word_array(char const *str);

//usages
void my_point_h();

//map handling
soko_t *init(soko_t *soko, char *str, int num);
soko_t *where_is_p(soko_t *soko);
void free_malloc(soko_t *soko);

//size
void height(soko_t *soko);
void length(soko_t *soko);

//reload
void reload(soko_t *soko);

//command
soko_t *movements(soko_t *soko);

//win
void win(soko_t *soko);

//lose
void lose(soko_t *soko);

//error handling
int is_a_map(char *str);

#endif /* !MYSOKOBAN_H_ */