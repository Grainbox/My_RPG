/*
** EPITECH PROJECT, 2022
** player_moves.c
** File description:
** player_moves
*/

#include <unistd.h>
#include <stdbool.h>
#include "rpg.h"

static void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}

static void left_right_move(global *all, sfVector2f *move, int speed)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        if (all->game.img[2].last != 4) {
            all->game.img[2].rect[0].left = 0;
            all->game.img[2].last = 4;
        }
        move->x = speed;
        all->game.img[2].rect[0].top = 95;
        move_rect(&all->game.img[2].rect[0], 70, 700);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        if (all->game.img[2].last != 3) {
            all->game.img[2].rect[0].left = 0;
            all->game.img[2].last = 3;
        }
        move->x = -speed;
        all->game.img[2].rect[0].top = 182;
        move_rect(&all->game.img[2].rect[0], 70, 700);
    }
}

static void up_move(global *all, sfVector2f *move, int speed)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        if (all->game.img[2].last != 1 && !sfKeyboard_isKeyPressed(sfKeyQ) &&
            !sfKeyboard_isKeyPressed(sfKeyD)) {
            all->game.img[2].rect[0].left = 0;
            all->game.img[2].last = 1;
            all->game.img[2].rect[0].top = 360;
            move_rect(&all->game.img[2].rect[0], 70, 280);
        }
        if (!sfKeyboard_isKeyPressed(sfKeyQ) &&
            !sfKeyboard_isKeyPressed(sfKeyD))
            move_rect(&all->game.img[2].rect[0], 70, 280);
        move->y = speed;
    }
}

static void down_move(global *all, sfVector2f *move, int speed)
{
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        if (all->game.img[2].last != 2 && !sfKeyboard_isKeyPressed(sfKeyQ) &&
            !sfKeyboard_isKeyPressed(sfKeyD)) {
            all->game.img[2].rect[0].left = 0;
            all->game.img[2].last = 2;
            all->game.img[2].rect[0].top = 450;
            move_rect(&all->game.img[2].rect[0], 70, 280);
        }
        if (!sfKeyboard_isKeyPressed(sfKeyQ) &&
            !sfKeyboard_isKeyPressed(sfKeyD))
            move_rect(&all->game.img[2].rect[0], 70, 280);
        move->y = -speed;
    }
}

void player_moves(global *all, sfVector2f *move, int speed)
{
    if ((sfKeyboard_isKeyPressed(sfKeyQ) && sfKeyboard_isKeyPressed(sfKeyD)) ||
        (sfKeyboard_isKeyPressed(sfKeyZ) && sfKeyboard_isKeyPressed(sfKeyS))) {
        all->game.img[2].rect[0].top = 0;
        all->game.img[2].rect[0].left = 0;
        return;
    }
    up_move(all, move, speed);
    down_move(all, move, speed);
    left_right_move(all, move, speed);
}
