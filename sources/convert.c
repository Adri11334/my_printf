/*
** EPITECH PROJECT, 2021
** printf
** File description:
** convert files functions
*/

#include <stdlib.h>
#include <printf.h>

int to_octal(int dec)
{
    int octal = 0;

    for (int i = 1; i != 0; i *= 10) {
        octal += (dec % 8) * i;
        dec /= 8;
    }
    return octal;
}

void to_binary(unsigned int dec, char *binary, int len)
{
    int binary_index = len - 1;

    for (int bin_i = 0; bin_i <= len; bin_i++) {
        binary[bin_i] = '0';
    }
    while (dec / 2 != 0) {
        binary[binary_index] = (dec % 2) + 48;
        dec /= 2;
        binary_index--;
    }
    binary[binary_index] = (dec % 2) + 48;
    binary[len] = '\0';
}

void to_hex(unsigned int dec, char *hex, int len)
{
    int hex_index = len - 1;

    for (int hex_i = 0; hex_i <= len; hex_i++)
        hex[hex_i] = 'X';
    while (dec / 16 != 0) {
        if ((dec % 16) > 9)
            hex[hex_index] = (dec % 16) + 55;
        else
            hex[hex_index] = (dec % 16) + 48;
        dec /= 16;
        hex_index--;
    }
    if ((dec % 16) > 9)
        hex[hex_index] = (dec % 16) + 55;
    else
        hex[hex_index] = (dec % 16) + 48;
    hex[len] = '\0';
}

void to_hex_long(long long nb, char *hex, int len)
{
    int hex_index = len - 1;

    for (int hex_i = 0; hex_i <= len; hex_i++)
        hex[hex_i] = 'X';
    while (nb / 16 != 0) {
        if ((nb % 16) > 9)
            hex[hex_index] = (nb % 16) + 55;
        else
            hex[hex_index] = (nb % 16) + 48;
        nb /= 16;
        hex_index--;
    }
    if ((nb % 16) > 9)
        hex[hex_index] = (nb % 16) + 55;
    else
        hex[hex_index] = (nb % 16) + 48;
    hex[len] = '\0';
}
