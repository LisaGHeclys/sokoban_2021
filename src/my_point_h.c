/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_point_h
*/

#include "mysokoban.h"

void my_point_h(void)
{
    char buffer[500];

    read(open("./usages/help.txt", O_RDONLY), buffer, 500);
    my_printf(buffer);
}