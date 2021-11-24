> Epitech Project 2021 <br>
> B1 - Unix System Programming <br>
> B-PSU-100

# {EPITECH} - my_printf
#### printf command-like

### Coding Style
- style mark: ?
- style major: 1
- style minor: 3
- style info: 0
<br>

### Note : 54.2%
- 01: 8/8
- 02: 13/13
- 03: 5/6
- 04: 0/9
- 05: 0/6
- 06: 0/6

### Coverage: 98%
<br>

### Content
**binary name**: libmy.a<br>
**language**: C<br>
**build tool**: via Makefile, including re, all, clean, fclean [my_tests, tests_run, cover, tests_file] rules

<br>

### Goal
You must recode the **printf** function from the C library according to the C99 standard. Your function should
be prototyped like the printf function.<br>
You do not have to implement the C library printf buffer handling.<br>
You must process all **printf** formating flags **except** the following (which are optional):
<br>
- float or double types management,
- %n flag management,
- " * " , " ’ " and " I " (capital i) flags management.

You must add a %b formating flag, which prints unsigned numbers in a binary base.<br>
You must also add a %S formating flag, which prints a character string (like %s). However, non-printable
characters (ASCII value strictly smaller than 32 or greater or equal than 127) must be represented by a back-
slash to be followed by the character’s value in octal base.

<br>

### Unit tests
```C
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
  cr_redirect_stdout();
  cr_redirect_stderr();
}

Test (my_printf, simple_string, .init=redirect_all_std)
{
  my_printf("hello world");
  cr_assert_stdout_eq_str("hello world");
}
``` 

<br>

### Examples
```C
char str[5];

my_strcpy(str, "toto");
str[1] = 6;
my_printf("%S\n", str);
```
```T
~/B-PSU-100> ./a.out
t\006to
~/B-PSU-100>
```

<br>

>- **Student:** Adrien VERMERSCH
>-  **Email:** adrien.vermersch@epitech.eu
>- **Year:** 2021
>- **Promotion:** 2026
>- **Campus:** Bordeaux

Code rédigé selon la norme Epitech (promo 2026).<br><br>
Recopier ce repo revient au vol de code.<br>
Autrement dit, -42<br><br>
