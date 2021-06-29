/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "mysokoban.h"

int main(int ac, char **av)
{
    struct stat sb;
    char *buffer;
    int fd;

    if (ac != 2)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h')
        my_point_h();
    else {
        fd = open(av[1], O_RDONLY);
        if (fd == -1 || ac != 2)
            return 84;
        stat(av[1], &sb);
        buffer = malloc(sizeof(char) * sb.st_size);
        read(open(av[1], O_RDONLY), buffer, sb.st_size);
        buffer[sb.st_size - 1] = '\0';
        if (my_sokoban(buffer) == 84)
            return 84;
    }
    return 0;
}