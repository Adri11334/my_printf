/*
** EPITECH PROJECT, 2021
** printf
** File description:
** criterion tests on printf functions
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <printf.h>

void redirect_all_stdout(void);

Test(test_printf, test_printf, .init=redirect_all_stdout)
{
    my_printf("%s %S %d %i %c %b%", "Adrien", "Adri\ben", 45, 45, '!', 3);

    cr_assert_stdout_eq_str("Adrien Adri\\010en 45 45 ! 11%");
}

Test(test_printf_spec, test_printf_spec, .init=redirect_all_stdout)
{
    char string[4] = "toto";
    int number = 42;
    void *toto = &number;

    string[1] = 6;
    my_printf("%S %x %X %o %u %% %p%", string, 1456, 1456, 45, 45, toto);
    cr_assert_stdout_eq_str("t\\006to 5b0 5B0 55 45 % 0x7ffebcdf9a7c%");
}
