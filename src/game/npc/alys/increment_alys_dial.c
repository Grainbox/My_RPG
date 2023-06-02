/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** increment_alys_dial
*/

#include "rpg.h"

void increment_alys_dial(int *dial)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && *dial == 0) {
        *dial = 1;
        my_wait(0.5);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) && *dial == 1) {
        *dial = 2;
        my_wait(0.5);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) && *dial == 2) {
        *dial = 3;
        my_wait(0.5);
    }
}
