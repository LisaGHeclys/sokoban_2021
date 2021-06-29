/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** write a function that splits a string into words
*/
#include <stdlib.h>

int is_alphanum(char c)
{
    if (c == '\n')
        return (0);
    return (1);
}

char **malloc_array(char const *str)
{
    int words = 0;
    char **src;
    int i = 0;

    for (; str[i] && !is_alphanum(str[i]); i += 1);
    for (; str[i]; i += 1) {
        if (!is_alphanum(str[i])) {
            words += 1;
            for (; str[i] && !is_alphanum(str[i]); i += 1);
            i -= 1;
        }
    }
    src = malloc(sizeof(char *) * (words + 2));
    return (src);
}

char **malloc_string(char const *str)
{
    char **src = malloc_array(str);
    int len = 0;
    int j = 0;
    int i = 0;

    for (; str[i] && !is_alphanum(str[i]); i += 1);
    for (; str[i]; i += 1) {
        if (!is_alphanum(str[i])) {
            src[j] = malloc(sizeof(char) * (len + 1));
            j += 1;
            len = -1;
            for (; str[i] && !is_alphanum(str[i]); i += 1);
            i-= 1;
        }
        len += 1;
    }
    src[j] = malloc(sizeof(char) * (len + 1));
    return (src);
}

char **my_str_to_word_array(char const *str)
{
    char **src = malloc_string(str);
    int j = 0;
    int k = 0;
    int i = 0;

    for (; str[i] && !is_alphanum(str[i]); i += 1);
    while (str[i]) {
        while (str[i] && is_alphanum(str[i])) {
            src[j][k] = str[i];
            i += 1;
            k += 1;
        }
        src[j][k] = '\0';
        for (; str[i] && !is_alphanum(str[i]); i += 1);
        j += 1;
        k = 0;
    }
    src[j] = NULL;
    return (src);
}
