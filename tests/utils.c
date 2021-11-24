/*
** EPITECH PROJECT, 2021
** printf
** File description:
** criteroin for utils functions
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <printf.h>

Test(tests_conversion_low, tests_conversion_low)
{
    char *str = malloc(5);
    str[0] = 'A';
    str[1] = '-';
    str[2] = 'B';
    str[3] = 'c';
    str[4] = '\0';

    str = convert_strlowcase(str);
    cr_assert_eq(str[0], 'a');
    cr_assert_eq(str[1], '-');
    free(str);
}
