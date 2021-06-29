/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** it counts and returns the nb of char found in the string.
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
