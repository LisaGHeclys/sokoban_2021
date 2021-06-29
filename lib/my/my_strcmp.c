/*
** EPITECH PROJECT, 2020
** my strcmp
** File description:
** reproduce the behavior of strcmp
*/

int my_inegal(char const c1, char const c2)
{
    if (c1 > c2)
        return (-1);
    else if (c1 < c2)
        return (1);
    return (42);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] != '\0' && s2[i] != '\0'; i += 1) {
        if (s1[i] != s2[i]) {
            return (my_inegal(s1[i], s2[i]));
        }
    }
    if (s1[i] != s2[i])
        return (my_inegal(s1[i], s2[i]));
    return (0);
}
