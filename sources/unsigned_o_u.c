/*
** EPITECH PROJECT, 2021
** printf
** File description:
** converting unisgned int to octal or dec
*/

#include <printf.h>

unsigned int to_unsigned_octal(unsigned int dec)
{
    unsigned int octal = 0;
    
    for (unsigned int i = 1; i != 0; i *= 10) {
        octal += (dec % 8) * i;
        dec /= 8;
    }
    return octal;
}

void print_unsigned_octal(va_list arg)
{
    unsigned int octal = to_unsigned_octal(va_arg(arg, unsigned int));
    print_unisgned_number(octal);
}

void print_unsigned_dec(va_list arg)
{
    unsigned int nb = va_arg(arg, unsigned int);
    print_unisgned_number(nb);
}
