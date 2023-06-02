/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** display_win_loose
*/

#include "rpg.h"

void display_loose(global *all)
{
    char *buffer = malloc(sizeof(char) * 200);
    sfVector2f pos = {370, 850};
    sfVector2f scale = {0.8, 1};

    for (int i = 0; i < 8; i++)
        sfRenderWindow_drawSprite(all->window, iFight[i].sprite, NULL);
    my_sprintf("Serieuseument? Le gluant vous a tue...", buffer);
    sfText_setString(all->game.fight[3].text, buffer);
    sfText_setPosition(all->game.fight[3].text, pos);
    sfText_setScale(all->game.fight[3].text, scale);
    sfRenderWindow_drawText(all->window, all->game.fight[3].text, NULL);
    sfRenderWindow_drawText(all->window, all->game.fight[1].text, NULL);
    free(buffer);
}

void display_win(global *all)
{
    char *buffer = malloc(sizeof(char) * 200);
    sfVector2f pos = {370, 850};
    sfVector2f scale = {0.8, 1};

    for (int i = 0; i < 8; i++)
        sfRenderWindow_drawSprite(all->window, iFight[i].sprite, NULL);
    my_sprintf("Vous avez vaincu le gluant!", buffer);
    sfText_setString(all->game.fight[3].text, buffer);
    sfText_setPosition(all->game.fight[3].text, pos);
    sfText_setScale(all->game.fight[3].text, scale);
    sfRenderWindow_drawText(all->window, all->game.fight[3].text, NULL);
    sfRenderWindow_drawText(all->window, all->game.fight[1].text, NULL);
    free(buffer);
}

int is_win_loose(global *all)
{
    if (all->game.fight_stats.enemy_health <= 0) {
        all->game.fight_stats.fight = 4;
        display_win(all);
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            all->game.stats.level += 1;
            all->game.stats.points += 1;
            all->game.fight_stats.win = 1;
            return 1;
        }
    }
    if (all->game.fight_stats.my_health <= 0) {
        all->game.fight_stats.fight = 4;
        display_loose(all);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            return 2;
    }
    return 0;
}
