/*
** EPITECH PROJECT, 2021
** printf
** File description:
** structure pointeur sur fonction
*/

#ifndef FLAGS_STRUCT_H
    #define FLAGS_STRUCT_H
    #include <stdarg.h>
    typedef struct flag_s 
    {
        char flag;
        void (*ptr_function) (va_list);
    } flag_t;
#endif /* !FLAGS_STRUCT_H */
