/*
** EPITECH PROJECT, 2020
** header
** File description:
** help iheader
*/
#include <stdarg.h>
#include <stddef.h>

/*my lib C*/
void my_putchar(char c);
int my_putstr(char const *str);
int my_while_loop(int nb, int number_count, int value);
int my_put_nbr(int nb);
int my_putstrprintf(char *str);
int my_strlen(char *str);
int my_inegal(char const c1, char const c2);
int my_strcmp(char const *s1, char const *s2);
int my_getnbr(char *str);
int my_intlen(int nbr);
char *my_revstr(char *str);

/*flags
**
*/

/*flags i, d, c, s, p*/
void disp_stdarg(char *s, va_list list, int i);

/*flags o, u, x, X, b*/
void convert_base(int s1, char *s2);
void convert_base_hexa(int s1, char *s2);
int special_convert_base(int s1, char *s2);

/*flags S*/
void my_print_nbr(char c);
void my_unstring(char *str);

/*Test*/
int my_printf(char *s, ...);
void flags_filter2(char *s, va_list list, int i);
void flags_filter1(char *s, va_list list, int i);
