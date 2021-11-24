/*
** EPITECH PROJECT, 2021
** printf
** File description:
** redirect function dor criterion tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}
