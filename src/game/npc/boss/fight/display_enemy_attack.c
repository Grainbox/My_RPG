/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** display_enemy_attack
*/

#include "rpg.h"

static void draw_free_enemy(global *all, char *buffer)
{
    sfRenderWindow_drawText(all->window, all->game.fight[3].text, NULL);
    sfRenderWindow_drawText(all->window, all->game.fight[1].text, NULL);
    free(buffer);
}

static void set_boss_string(char *buffer, global *all)
{
    char *str = "Le boss vous charge et inflige %d degats";
    int damages = 10;

    if (all->game.fight_stats.defense == 1) {
        damages -= 3;
        all->game.fight_stats.defense = 0;
    }
    my_sprintf(str, buffer, damages);
    sfText_setString(all->game.fight[3].text, buffer);
}

void draw_enemy_attack(global *all)
{
    char *buffer = malloc(sizeof(char) * 200);
    sfVector2f pos = {370, 850};
    sfVector2f scale = {0.8, 1};
    sfVector2f health_scale = {1, 1};

    if (all->game.fight_stats.attacked == 0) {
        set_boss_string(buffer, all);
        sfText_setPosition(all->game.fight[3].text, pos);
        sfText_setScale(all->game.fight[3].text, scale);
        all->game.fight_stats.my_health -= 10;
        health_scale.x = (double)all->game.fight_stats.my_health / 100;
        if (all->game.fight_stats.my_health >= 0)
            sfSprite_setScale(iFight[6].sprite, health_scale);
    }
    all->game.fight_stats.attacked = 1;
    draw_free_enemy(all, buffer);
}
