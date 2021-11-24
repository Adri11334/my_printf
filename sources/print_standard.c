/*
** EPITECH PROJECT, 2021
** printf
** File description:
** basics print functions
*/

#include <stdarg.h>
#include <unistd.h>

void print_char(char c)
{
    write (1, &c, 1);
}

int print_number(int nb)
{
    int range = 1;
    int nb_buff = nb;

    if (nb < 0) {
        print_char('-');
        print_char(nb * -1);
        return 0;
    }
    while (nb_buff > 9) {
        nb_buff /= 10;
        range *= 10;
    }
    while (range >= 1) {
        print_char(((nb / range) % 10) + '0');
        range /= 10;
    }
    return 0;
}

void print_string(va_list arg)
{
    char *str = va_arg(arg, char*);

    for (int i = 0; str[i] != '\0'; ++i)
        print_char(str[i]);
}

void print_integer(va_list arg)
{
    int nb = va_arg(arg, int);
    print_number(nb);
}
