/*
** EPITECH PROJECT, 2021
** printf
** File description:
** print pointeurs
*/

#include <stdarg.h>
#include <stdlib.h>
#include <printf.h>


#include <stdio.h>

void print_ptr(va_list arg)
{
    long long nb = va_arg(arg, long long);
    char *hexa = malloc(33);
    int start_print = 0;

    to_hex_long(nb, hexa, 33);
    hexa = convert_strlowcase(hexa);
    print_char('0');
    print_char('x');
    while (hexa[start_print] > 102)
        (start_print)++;
    for (int i = start_print; hexa[i] != '\0'; ++i)
        print_char(hexa[i]);
    free(hexa);
}
