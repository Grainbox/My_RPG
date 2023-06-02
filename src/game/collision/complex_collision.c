/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** complex_collision
*/

#include "rpg.h"

static bool is_complex_collision2(sfVector2f pos, sfVector2f move)
{
    if (pos.x + move.x <= -1315 && pos.x + move.x >= -1930 &&
        pos.y + move.y >= 1623 && pos.y + move.y <= 1677)
        return true;
    if (pos.x + move.x <= -1315 && pos.x + move.x >= -1330 &&
        pos.y + move.y >= 1431 && pos.y + move.y <= 1623)
        return true;
    return false;
}

static bool check_pos1_2(global *all, sfVector2f pos, sfVector2f move, int y)
{
    for (int i = 0; i < all->game.col_house.size_1; i++)
        if (pos.x + move.x == all->game.col_house.pos1[y][i].x &&
            pos.y + move.y == all->game.col_house.pos1[y][i].y)
            return true;
    for (int i = 0; i < all->game.col_house.size_3; i++)
        if (pos.x + move.x == all->game.col_house.pos3[y][i].x &&
            pos.y + move.y == all->game.col_house.pos3[y][i].y)
            return true;
    return false;
}

static bool check_pos_3(global *all, sfVector2f pos, sfVector2f move, int y)
{
    for (int i = 0; i < all->game.col_house.size_2; i++)
        if (pos.x + move.x == all->game.col_house.pos2[y][i].x &&
            pos.y + move.y == all->game.col_house.pos2[y][i].y)
            return true;
    return false;
}

bool is_complex_collision(global *all, sfVector2f pos, sfVector2f move)
{
    for (int y = 0; y < 30; y++)
        if (check_pos1_2(all, pos, move, y))
            return true;
    for (int y = 0; y < 60; y++)
        if (check_pos_3(all, pos, move, y))
            return true;
    if (is_complex_collision2(pos, move))
        return true;
    return false;
}
