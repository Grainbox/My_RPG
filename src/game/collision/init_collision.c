/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init_collision
*/

#include "rpg.h"
#include <unistd.h>

static void get_point(double *a, sfVector2i p_1, sfVector2i p_2, double *tmp)
{
    *a = (p_2.y - p_1.y);
    *tmp = (p_2.x - p_1.x);
    *a /= *tmp;
}

static void init_collision_back(global *all)
{
    sfVector2i pos_1 = {-1321, 1623};
    sfVector2i pos_2 = {-1939, 1677};
    int size = 1939 - 1321;
    int x = -1321;
    double a = 0;
    double tmp = 0;
    double b = 0;

    all->game.col_house.pos3 = malloc(sizeof(sfVector2i *) * (31));
    for (int y = 0; y < 30; y++, pos_1.y++, pos_2.y++) {
        all->game.col_house.pos3[y] = malloc(sizeof(sfVector2i) * (size + 1));
        x = -1321;
        for (int i = 0; i < size; i++, x--) {
            get_point(&a, pos_1, pos_2, &tmp);
            b = (a * pos_2.x) * -1 + pos_2.y;
            all->game.col_house.pos3[y][i].x = x;
            all->game.col_house.pos3[y][i].y = a * x + b;
        }
    }
    all->game.col_house.size_3 = size;
}

static void init_collision_right(global *all, double tmp)
{
    sfVector2i pos_1 = {-1711, 1301};
    sfVector2i pos_2 = {-1940, 1410};
    int size = 1940 - 1711;
    int x = -1711;
    double a = 0;
    double b = 0;

    all->game.col_house.pos2 = malloc(sizeof(sfVector2i *) * (65));
    for (int y = 0; y < 60; y++, pos_1.x--, pos_2.x--) {
        x = -1711;
        all->game.col_house.pos2[y] = malloc(sizeof(sfVector2i) * (size + 1));
        for (int i = 0; i < size; i++, x--) {
            get_point(&a, pos_1, pos_2, &tmp);
            b = (a * pos_2.x) * -1 + pos_2.y;
            all->game.col_house.pos2[y][i].x = x;
            all->game.col_house.pos2[y][i].y = a * x + b;
        }
    }
    all->game.col_house.size_2 = size;
    init_collision_back(all);
}

void init_collision(global *all, double tmp)
{
    sfVector2i pos_1 = {-1315, 1432};
    sfVector2i pos_2 = {-1731, 1297};
    int size = 1731 - 1315;
    int x = -1315;
    double a = 0;
    double b = 0;

    all->game.col_house.pos1 = malloc(sizeof(sfVector2i *) * (31));
    for (int y = 0; y < 30; y++, pos_1.y--, pos_2.y--) {
        x = -1315;
        all->game.col_house.pos1[y] = malloc(sizeof(sfVector2i) * (size + 1));
        for (int i = 0; i < size; i++, x--) {
            get_point(&a, pos_1, pos_2, &tmp);
            b = (a * pos_2.x) * -1 + pos_2.y;
            all->game.col_house.pos1[y][i].x = x;
            all->game.col_house.pos1[y][i].y = a * x + b;
        }
    }
    all->game.col_house.size_1 = size;
    init_collision_right(all, 0);
}
