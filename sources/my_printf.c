/*
** EPITECH PROJECT, 2021
** printf
** File description: %d%s crash, %p 0x pointeur
** 8 novembre
*/

#include <stdarg.h>
#include <flag_struct.h>
#include <printf.h>

const flag_t flags[10] = {
    { 's', &print_string },
    { 'S', &print_spec_string },
    { 'd', &print_integer },
    { 'i', &print_integer },
    { 'b', &print_binary },
    { 'x', &print_hexadecimal_low },
    { 'X', &print_hexadecimal },
    { 'o', &print_unsigned_octal },
    { 'u', &print_unsigned_dec },
    { 'p', &print_ptr },
};

void check_percent(va_list list, int *i, char pc, char c)
{
    for (int index = 0; index < 10; ++index) {
        if (c == flags[index].flag) {
            flags[index].ptr_function(list);
            ++(*i);
            return;
        }
    }
    if (c == 'c') {
        print_char(va_arg(list, int));
        ++(*i);
        return;
    }
    if (c == '%') {
        print_char(c);
        ++(*i);
        return;
    }
    print_char(pc);
}

void my_printf(char *str, ...)
{
    va_list list;
    char *base_string = str;

    va_start(list, str);
    for (int i = 0; base_string[i] != '\0'; ++i) {
        if (base_string[i] == '%') {
            check_percent(list, &i, base_string[i], base_string[i + 1]);
        } else {
            print_char(base_string[i]);
        }
    }
    va_end(list);
}
