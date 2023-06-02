/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init
*/

#include "rpg.h"

void init_boss(global *all)
{
    int x = all->game.fight[9].pos_x = 330;
    int y = all->game.fight[9].pos_y = 800;
    sfVector2f scale = {1, 1};
    sfVector2f pos = {x, y};
    char *path = "./content/boss.png";

    iFight[9].texture = sfTexture_createFromFile(path, NULL);
    iFight[9].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[9].sprite, iFight[9].texture, sfTrue);
    sfSprite_setScale(iFight[9].sprite, scale);
    sfSprite_setPosition(iFight[9].sprite, pos);
}

static void init_character(global *all)
{
    int x = all->game.fight[2].pos_x = 520;
    int y = all->game.fight[2].pos_y = 300;
    sfVector2f scale = {3.5, 3.5};
    sfVector2f pos = {x, y};
    char path[] = "./content/perso/player.png";
    sfIntRect rect = {70, 0, 70, 90};

    iFight[2].texture = sfTexture_createFromFile(path, NULL);
    iFight[2].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[2].sprite, iFight[2].texture, sfTrue);
    sfSprite_setScale(iFight[2].sprite, scale);
    sfSprite_setPosition(iFight[2].sprite, pos);
    sfSprite_setTextureRect(iFight[2].sprite, rect);
}

static void init_background(global *all)
{
    int x = all->game.fight[0].pos_x = 0;
    int y = all->game.fight[0].pos_y = 0;
    char path[] = "./content/background/fight_scene1.png";
    iFight[0].texture = sfTexture_createFromFile(path, NULL);
    iFight[0].sprite = sfSprite_create();
    sfVector2f scale = {2.74, 2.32};
    sfVector2f pos = {x, y};

    sfSprite_setTexture(iFight[0].sprite, iFight[0].texture, sfTrue);
    sfSprite_setScale(iFight[0].sprite, scale);
    sfSprite_setPosition(iFight[0].sprite, pos);
}

static void log_bar(global *all)
{
    int x = all->game.fight[3].pos_x = 330;
    int y = all->game.fight[3].pos_y = 800;
    sfVector2f scale = {2, 2};
    sfVector2f pos = {x, y};
    char *path = "./content/log_bar.png";

    iFight[3].texture = sfTexture_createFromFile(path, NULL);
    iFight[3].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[3].sprite, iFight[3].texture, sfTrue);
    sfSprite_setScale(iFight[3].sprite, scale);
    sfSprite_setPosition(iFight[3].sprite, pos);
}

void init_boss_fight(global *all)
{
    iFight = malloc(sizeof(s_fight) * 10);
    init_background(all);
    init_boss(all);
    init_character(all);
    log_bar(all);
    log_fight_bar(all);
    init_fight_texts(all);
    my_health_bar(all);
    enemy_health_bar(all);
    enemy_back_bar(all);
    my_back_bar(all);
}
