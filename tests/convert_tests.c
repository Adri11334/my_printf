/*
** EPITECH PROJECT, 2021
** printf
** File description:
** criterion tests on convert functions
*/


#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <printf.h>

void redirect_all_stdout(void);


Test(test_octal, test_octal_alpha)
{
    int result = to_octal(66);

    cr_assert_eq(result, 102);
}

Test(test_binary, test_binray_alpha)
{
    char *binary = malloc(33);

    to_binary(66, binary, 33);
    cr_assert_str_eq(binary, "000000000000000000000000001000010");
    free(binary);
}

Test(test_binary_min, test_binray_min)
{
    char *binary = malloc(33);

    to_binary(1, binary, 33);
    cr_assert_str_eq(binary, "000000000000000000000000000000001");
    free(binary);
}

Test(test_binary_max, test_binray_max)
{
    char *binary = malloc(33);

    to_binary(4294967295, binary, 33);
    cr_assert_str_eq(binary, "011111111111111111111111111111111");
    free(binary);
}

Test(test_hexa_max, test_hexa_max)
{
    char *hexa = malloc(33);

    to_hex(4294967295, hexa, 33);
    cr_assert_str_eq(hexa, "XXXXXXXXXXXXXXXXXXXXXXXXXFFFFFFFF");
    free(hexa);
}

Test(test_hexa, test_hexa)
{
    char *hexa = malloc(33);

    to_hex(668, hexa, 33);
    cr_assert_str_eq(hexa, "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX29C");
    free(hexa);
}

Test(test_hexa_min, test_hexa_min)
{
    char *hexa = malloc(33);

    to_hex(1, hexa, 33);
    cr_assert_str_eq(hexa, "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX1");
    free(hexa);
}

Test(test_hexa_low, test_hexa_low)
{
    char *hexa = malloc(33);

    to_hex(668, hexa, 33);
    cr_assert_str_eq(hexa, "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX29C");
    free(hexa);
}
