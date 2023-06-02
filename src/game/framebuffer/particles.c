/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** particles
*/

#include "rpg.h"

static void rand_pixel(global *all, sfVector2i pos, sfColor color)
{
    if (all->game.f_buffer.fade_camp == 255)
        all->game.f_buffer.add_camp = -1;
    if (all->game.f_buffer.fade_camp == 0)
        all->game.f_buffer.add_camp = 1;
    all->game.f_buffer.fade_camp += all->game.f_buffer.add_camp;
    color.a = all->game.f_buffer.fade_camp;
    if ((rand() % 50) == 1)
        put_pixel(all, pos.x, pos.y, color);
}

void firecamp_particles(global *all)
{
    sfVector2i pos1 = {3500, 1300};
    sfVector2i pos2 = {3564, 1201};
    sfVector2f map_pos = {all->game.img[0].pos_x, all->game.img[0].pos_y};
    sfColor color = {101, 101, 101, 255};

    if (map_pos.x >= 1090 || map_pos.x <= -1200 || map_pos.y <= -180 ||
        map_pos.y >= 1420)
        return;
    for (; pos1.y != pos2.y; pos1.y--) {
        for (; pos1.x != pos2.x; pos1.x++)
            rand_pixel(all, pos1, color);
        pos1.x = 3500;
    }
}

void tree_particles(global *all)
{
    sfColor c = {38, 173, 126, 255};

    if (all->game.f_buffer.leaf_y >= 864) {
        all->game.f_buffer.leaf_x = (rand() % (2714 - 2571)) + 2571;
        all->game.f_buffer.leaf_y = 777;
    } else
        all->game.f_buffer.leaf_y++;
    if (all->game.f_buffer.leaf_y2 >= 864) {
        all->game.f_buffer.leaf_x2 = (rand() % (2714 - 2571)) + 2571;
        all->game.f_buffer.leaf_y2 = 777;
    } else
        all->game.f_buffer.leaf_y2++;
    if (all->game.f_buffer.leaf_y3 >= 864) {
        all->game.f_buffer.leaf_x3 = (rand() % (2714 - 2571)) + 2571;
        all->game.f_buffer.leaf_y3 = 777;
    } else
        all->game.f_buffer.leaf_y3++;
    put_pixel(all, all->game.f_buffer.leaf_x, all->game.f_buffer.leaf_y, c);
    put_pixel(all, all->game.f_buffer.leaf_x2, all->game.f_buffer.leaf_y2, c);
    put_pixel(all, all->game.f_buffer.leaf_x3, all->game.f_buffer.leaf_y3, c);
}
