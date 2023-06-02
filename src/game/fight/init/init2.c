/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init2
*/

#include "rpg.h"

void log_fight_bar(global *all)
{
    int x = all->game.fight[3].pos_x = 330;
    int y = all->game.fight[3].pos_y = 800;
    sfVector2f scale = {2, 2};
    sfVector2f pos = {x, y};
    char *path = "./content/buttons/fight_log1.png";

    iFight[8].texture = sfTexture_createFromFile(path, NULL);
    iFight[8].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[8].sprite, iFight[8].texture, sfTrue);
    sfSprite_setScale(iFight[8].sprite, scale);
    sfSprite_setPosition(iFight[8].sprite, pos);
}

void my_health_bar(global *all)
{
    int x = 1180;
    int y = 370;
    sfVector2f scale = {1, 1};
    sfVector2f pos = {x, y};
    char *path = "./content/effects/health_bar.png";

    iFight[7].texture = sfTexture_createFromFile(path, NULL);
    iFight[7].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[7].sprite, iFight[7].texture, sfTrue);
    sfSprite_setScale(iFight[7].sprite, scale);
    sfSprite_setPosition(iFight[7].sprite, pos);
}

void enemy_health_bar(global *all)
{
    int x = 580;
    int y = 280;
    sfVector2f scale = {1, 1};
    sfVector2f pos = {x, y};
    char *path = "./content/effects/health_bar.png";

    iFight[6].texture = sfTexture_createFromFile(path, NULL);
    iFight[6].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[6].sprite, iFight[6].texture, sfTrue);
    sfSprite_setScale(iFight[6].sprite, scale);
    sfSprite_setPosition(iFight[6].sprite, pos);
}

void enemy_back_bar(global *all)
{
    int x = 580;
    int y = 280;
    sfVector2f scale = {1, 1};
    sfVector2f pos = {x, y};
    char *path = "./content/effects/health_bar_back.png";

    iFight[5].texture = sfTexture_createFromFile(path, NULL);
    iFight[5].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[5].sprite, iFight[5].texture, sfTrue);
    sfSprite_setScale(iFight[5].sprite, scale);
    sfSprite_setPosition(iFight[5].sprite, pos);
}

void my_back_bar(global *all)
{
    int x = 1180;
    int y = 370;
    sfVector2f scale = {1, 1};
    sfVector2f pos = {x, y};
    char *path = "./content/effects/health_bar_back.png";

    iFight[4].texture = sfTexture_createFromFile(path, NULL);
    iFight[4].sprite = sfSprite_create();
    sfSprite_setTexture(iFight[4].sprite, iFight[4].texture, sfTrue);
    sfSprite_setScale(iFight[4].sprite, scale);
    sfSprite_setPosition(iFight[4].sprite, pos);
}
