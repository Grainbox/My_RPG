/*
** EPITECH PROJECT, 2022
** Project-Template
** File description:
** my_str_is_letter
*/

#include "my.h"
#include <stdbool.h>

int my_str_isletter(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] > 'a' && str[i] < 'z') ||
            (str[i] > 'A' && str[i] < 'Z'));
        else
            return false;
    }
    return true;
}
