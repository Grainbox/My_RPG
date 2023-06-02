/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** clear_buffer
*/

#include "rpg.h"

void clear_framebuffer(global *all)
{
    sfVector2i pos1 = {3500, 1300};
    sfVector2i pos2 = {3564, 1201};
    sfColor c = {0, 0, 0, 0};

    for (; pos1.y != pos2.y; pos1.y--) {
        for (; pos1.x != pos2.x; pos1.x++)
            put_pixel(all, pos1.x, pos1.y, c);
        pos1.x = 3500;
    }
    put_pixel(all, all->game.f_buffer.leaf_x, all->game.f_buffer.leaf_y, c);
    put_pixel(all, all->game.f_buffer.leaf_x2, all->game.f_buffer.leaf_y2, c);
    put_pixel(all, all->game.f_buffer.leaf_x3, all->game.f_buffer.leaf_y3, c);
}
