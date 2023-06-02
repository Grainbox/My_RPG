/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** my_sprintf
*/

#include "rpg.h"
#include <stdarg.h>

static void int_flag(char *buffer, va_list args)
{
    int number = va_arg(args, int);
    char *str_number = malloc(sizeof(char) * 100);

    int_to_str(str_number, number);
    my_strcat(buffer, str_number);
    free(str_number);
}

static void str_flag(char *buffer, va_list args)
{
    char *str = va_arg(args, char *);

    my_strcat(buffer, str);
}

static void char_flag(char *buffer, va_list args)
{
    char c = va_arg(args, int);

    my_strcat(buffer, &c);
}

static void flag(char *str, char *buffer, int *i, va_list args)
{
    if (str[*i + 1] == 'd')
        int_flag(buffer, args);
    if (str[*i + 1] == 's')
        str_flag(buffer, args);
    if (str[*i + 1] == 'c')
        char_flag(buffer, args);
    *i += 1;
}

void my_sprintf(char *str, char *buffer, ...)
{
    va_list args;
    int j = 0;

    buffer[0] = '\0';
    va_start(args, buffer);
    for (int i = 0; str[i] != '\0'; i++) {
        j = my_strlen(buffer);
        if (str[i] == '%') {
            flag(str, buffer, &i, args);
            continue;
        } else {
            buffer[j] = str[i];
            buffer[j + 1] = '\0';
        }
    }
    va_end(args);
}
