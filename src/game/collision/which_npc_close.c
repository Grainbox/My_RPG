/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** is_deco_collision
*/

#include "rpg.h"

int which_npc_close(global *all)
{
    sfVector2f pos = {all->game.img[0].pos_x, all->game.img[0].pos_y};

    if (pos.x >= 4300 && pos.x <= 4844 &&
        pos.y >= 800 && pos.y <= 1200)
        return 1;
    if (pos.x >= -726 && pos.x <= -161 &&
        pos.y >= 1133 && pos.y <= 1604)
        return 2;
    if (pos.x >= 2970 && pos.x <= 3360 &&
        pos.y >= -3060 && pos.y <= -2790)
        return 3;
    if (pos.x >= 1671 && pos.x <= 2584 &&
        pos.y >= 2235 && pos.y <= 2192)
        return 4;
    return 0;
}
