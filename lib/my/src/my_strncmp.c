/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** |
*/

#include "my.h"
#include <stdbool.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (my_strlen(s2) < n)
        return false;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (i == n)
            break;
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
