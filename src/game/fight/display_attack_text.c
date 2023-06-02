/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** display_attack_text
*/

#include "rpg.h"

static void attack_1_process(global *all, char *buffer, char *my_attack)
{
    char *print = "Vous utilisez %s, vous infligez %d degats";
    char *attack = "l'attaque";
    float damages = 0;
    sfVector2f pos = {370, 850};
    sfVector2f scale = {0.8, 1};
    sfVector2f health_scale = {1, 1};

    my_strcpy(my_attack, attack);
    damages = (float)(all->game.stats.strengh) / 10 + 1;
    damages *= 20;
    all->game.fight_stats.enemy_health -= (int)damages;
    my_sprintf(print, buffer, attack, (int)damages);
    sfText_setString(all->game.fight[3].text, buffer);
    sfText_setPosition(all->game.fight[3].text, pos);
    sfText_setScale(all->game.fight[3].text, scale);
    health_scale.x = (double)all->game.fight_stats.enemy_health / 100;
    if (health_scale.x < 0)
        health_scale.x = 0;
    sfSprite_setScale(iFight[7].sprite, health_scale);
}

static void defense_process(global *all, char *buffer, char *my_attack)
{
    char *print = "Vous utilisez %s, vous vous protegez de %d degats";
    char *defence = "defense";
    sfVector2f pos = {370, 850};
    sfVector2f scale = {0.62, 1};
    int damage_block = 3;

    if (all->inventory.shield == 1)
        damage_block = 6;
    my_strcpy(my_attack, defence);
    my_sprintf(print, buffer, defence, damage_block);
    sfText_setString(all->game.fight[3].text, buffer);
    sfText_setPosition(all->game.fight[3].text, pos);
    sfText_setScale(all->game.fight[3].text, scale);
    all->game.fight_stats.defense = 1;
}

static void magic_1_process(global *all, char *buffer, char *my_attack)
{
    char *print = "Vous lancez %s, vous infligez %d degats";
    char *magic = "un sort";
    float damages = 0;
    sfVector2f pos = {370, 850};
    sfVector2f scale = {0.8, 1};
    sfVector2f health_scale = {1, 1};

    my_strcpy(my_attack, magic);
    damages = (float)(all->game.stats.wisdom) / 10 + 1;
    damages *= 20;
    all->game.fight_stats.enemy_health -= (int)damages;
    my_sprintf(print, buffer, magic, (int)damages);
    sfText_setString(all->game.fight[3].text, buffer);
    sfText_setPosition(all->game.fight[3].text, pos);
    sfText_setScale(all->game.fight[3].text, scale);
    health_scale.x = (double)all->game.fight_stats.enemy_health / 100;
    if (health_scale.x < 0)
        health_scale.x = 0;
    sfSprite_setScale(iFight[7].sprite, health_scale);
}

void display_attack_text(global *all)
{
    char *buffer = malloc(sizeof(char) * 200);
    char *my_attack = malloc(sizeof(char) * 20);

    if (all->game.fight_stats.attack == 1)
        attack_1_process(all, buffer, my_attack);
    if (all->game.fight_stats.attack == 2)
        magic_1_process(all, buffer, my_attack);
    if (all->game.fight_stats.attack == 3)
        defense_process(all, buffer, my_attack);
    free(buffer);
    free(my_attack);
    sfRenderWindow_drawText(all->window, all->game.fight[3].text, NULL);
    sfRenderWindow_drawText(all->window, all->game.fight[1].text, NULL);
    all->game.fight_stats.attack = 0;
}
