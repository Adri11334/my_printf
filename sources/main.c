/*
** EPITECH PROJECT, 2021
** printf
** File description:
** main function
*/

#include <printf.h>
#include <stdio.h>
#include <stdlib.h>

int print_unisgned_number(unsigned int nb);

int main(void)
{
    char string[4] = "toto";
    int number = 42;
    void *toto = &number;

    string[1] = 6;
    my_printf("%S %x %X %o %u %% %p%", string, 1456, 1456, 45, 45, toto);
    return 0;
}
