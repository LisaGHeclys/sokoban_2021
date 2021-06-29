/*
** EPITECH PROJECT, 2020
** my_intlen
** File description:
** count the nbr of unit in int
*/

int my_intlen(int nbr)
{
    int i = 0;
    for (; nbr != 0; i ++) {
        nbr /= 10;
    }
    return (i);
}
