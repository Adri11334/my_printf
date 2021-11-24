/*
** EPITECH PROJECT, 2021
** printf
** File description:
** criterion tests on print functions
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <printf.h>

void redirect_all_stdout(void);

Test (test_int_udz, test_int_under_0)
{
    int result = print_number(-84);

    cr_assert_eq(result, 0);
}

Test(test_octal, test_octal, .init=redirect_all_stdout)
{
    print_octal(24);

    cr_assert_stdout_eq_str("\\030");
}

Test(test_char, test_char, .init=redirect_all_stdout)
{
    print_char('a');

    cr_assert_stdout_eq_str("a");
}
