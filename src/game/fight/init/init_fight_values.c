/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init_fight_values
*/

#include "rpg.h"

void init_fight_values(global *all)
{
    all->game.fight_stats.attack = 0;
    all->game.fight_stats.fight = 0;
    all->game.fight_stats.enemy_health = 100;
    all->game.fight_stats.my_health = 100;
    all->game.fight_stats.attacked = 0;
    all->game.fight_stats.win = 0;
}
