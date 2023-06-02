/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** collision
*/

#include "rpg.h"

static bool is_basic_collision(sfVector2f pos, sfVector2f move)
{
    if (pos.y + move.y >= 2352 || pos.x + move.x >= 8170 ||
        pos.y + move.y <= -8550 || pos.x + move.x <= -1930)
        return true;
    if (pos.x + move.x <= 1083 && pos.x + move.x >= 330 &&
        pos.y + move.y >= 1408 && pos.y + move.y <= 1700)
        return true;
    if (pos.x + move.x >= 4476 && pos.x + move.x <= 4730 &&
        pos.y + move.y >= 1010 && pos.y + move.y <= 1090)
        return true;
    if (pos.x + move.x >= -584 && pos.x + move.x <= -400 &&
        pos.y + move.y >= 1315 && pos.y + move.y <= 1382)
        return true;
    if (pos.x + move.x >= 3018 && pos.x + move.x <= 3391 &&
        pos.y + move.y >= -2958 && pos.y + move.y <= -2886)
        return true;
    if (pos.x + move.x >= -200 && pos.x + move.x <= 160 &&
        pos.y + move.y <= 690 && pos.y + move.y >= 600)
        return true;
    return false;
}

bool is_deco_collision(sfVector2f pos, sfVector2f move)
{
    if (is_village_collision(pos, move))
        return true;
    if (is_wall_collision(pos, move))
        return true;
    if (is_nature_collision(pos, move))
        return true;
    if (collisions_bis(pos, move))
        return true;
    if (is_tents_collisions(pos, move))
        return true;
    return false;
}

bool is_collision(global *all, sfVector2f pos, sfVector2f move)
{
    if (is_basic_collision(pos, move))
        return true;
    if (is_deco_collision(pos, move))
        return true;
    if (is_complex_collision(all, pos, move))
        return true;
    return false;
}
