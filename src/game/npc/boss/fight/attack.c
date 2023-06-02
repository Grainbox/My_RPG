/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** attack
*/

#include "rpg.h"

void init_boss_values(global *all)
{
    all->game.fight_stats.attack = 0;
    all->game.fight_stats.fight = 0;
    all->game.fight_stats.enemy_health = 250;
    all->game.fight_stats.my_health = 180;
    all->game.fight_stats.attacked = 0;
    all->game.fight_stats.win = 0;
}

int get_char_attack(global *all)
{
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (click && mouse.x >= 465 && mouse.x <= 705 && mouse.y >= 922 &&
        mouse.y <= 976)
        return 1;
    if (click && mouse.x >= 873 && mouse.x <= 1050 && mouse.y >= 924 &&
        mouse.y <= 976)
        return 2;
    if (click && mouse.x >= 1207 && mouse.x <= 1439 && mouse.y >= 924 &&
        mouse.y <= 976)
        return 3;
    return 0;
}

void fight_boss_process(global *all)
{
    if (all->game.fight_stats.fight == 1) {
        sfRenderWindow_drawSprite(all->window, iFight[8].sprite, NULL);
        sfRenderWindow_drawText(all->window, all->game.fight[2].text, NULL);
        all->game.fight_stats.attack = get_char_attack(all);
    }
    if (all->game.fight_stats.attack != 0)
        all->game.fight_stats.fight = 2;
    if (all->game.fight_stats.fight == 2)
        draw_char_attack(all);
    if (all->game.fight_stats.fight == 3)
        draw_enemy_attack(all);
}
