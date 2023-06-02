/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** increment_dial
*/

#include "rpg.h"

void increment_dial(int *dial, int win)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && *dial == 0) {
        *dial = 1;
        my_wait(0.5);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) && win == 1 &&
        *dial == 1) {
        *dial = 2;
        my_wait(0.5);
    }
    if (sfKeyboard_isKeyPressed(sfKeySpace) && win == 1 &&
        *dial == 2) {
        *dial = 3;
        my_wait(0.5);
    }
}
