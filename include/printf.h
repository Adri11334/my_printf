/*
** EPITECH PROJECT, 2021
** printf
** File description:
** printf proto
*/

#include <stdarg.h>

#ifndef PRINTF_H
    #define PRINTF_H
    int to_octal(int dec);
    int print_number(int nb);
    void print_char(char c);
    void print_octal(int nb);
    void my_printf(char *str, ...);
    void to_binary(unsigned int dec, char *binary, int len);
    void to_hex(unsigned int dec, char *hex, int len);
    void check_percent(va_list list, int *i, char pc, char c);
    void print_unsigned_octal(va_list arg);
    void print_unsigned_dec(va_list arg);
    void print_hexadecimal_low(va_list arg);
    void print_spec_string(va_list arg);
    void print_hexadecimal(va_list arg);
    void print_integer(va_list arg);
    void print_binary(va_list arg);
    void print_string(va_list arg);
    char *convert_strlowcase(char *str);
    int print_unisgned_number(unsigned int nb);
    void print_ptr(va_list arg);
    void to_hex_long(long long nb, char *hex, int len);
#endif /* !PRINTF_H */
