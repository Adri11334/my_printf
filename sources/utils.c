/*
** EPITECH PROJECT, 2021
** printf
** File description:
** utils function
*/

#include <printf.h>

int print_unisgned_number(unsigned int nb)
{
    unsigned int range = 1;
    unsigned int nb_buff = nb;

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

char *convert_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}
