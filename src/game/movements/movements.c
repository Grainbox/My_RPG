/*
** EPITECH PROJECT, 2022
** my movements
** File description:
** desc
*/

#include <unistd.h>
#include <stdbool.h>
#include "rpg.h"

static void assign(sfVector2f pos, global *all, sfVector2f move)
{
    all->game.img[0].pos_x = pos.x;
    all->game.img[0].pos_y = pos.y;
    all->game.img[0].pos_x += move.x;
    all->game.img[0].pos_y += move.y;
    sfSprite_setTextureRect(iGame[2].sprite, all->game.img[2].rect[0]);
    sfSprite_setPosition(sMap.sprite, pos);
    sfSprite_setPosition(sVillage.sprite, pos);
    sfSprite_setPosition(all->game.f_buffer.sprite, pos);
}

void movements(global *all)
{
    sfVector2f pos = {all->game.img[0].pos_x, all->game.img[0].pos_y};
    sfVector2f move = {0, 0};
    int speed = 10;

    if (sfKeyboard_isKeyPressed(sfKeyLShift))
        speed = 20;
    if (sfKeyboard_isKeyPressed(sfKeyQ) && sfKeyboard_isKeyPressed(sfKeyD))
        speed = 0;
    player_moves(all, &move, speed);
    if (!sfKeyboard_isKeyPressed(sfKeyS) && !sfKeyboard_isKeyPressed(sfKeyQ) &&
        !sfKeyboard_isKeyPressed(sfKeyD) && !sfKeyboard_isKeyPressed(sfKeyZ)) {
            all->game.img[2].rect[0] = (sfIntRect) {0, 0, 68, 90};
            all->game.img[2].last = 0;
    }
    my_wait(0.05);
    if (is_collision(all, pos, move))
        return;
    assign(pos, all, move);
}
