/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** my_wait
*/

#include "rpg.h"

void my_wait(float second)
{
    sfClock *clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);

    second *= 1000000;
    while (time.microseconds < second)
        time = sfClock_getElapsedTime(clock);
    sfClock_destroy(clock);
}
