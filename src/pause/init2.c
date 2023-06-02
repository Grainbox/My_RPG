/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init2
*/

#include "rpg.h"

void init_status_button(global *all)
{
    int x = all->game.img_pause[4].pos_x = 165;
    int y = all->game.img_pause[4].pos_y = 340;
    char path[] = "./content/buttons/status_button.png";
    sfVector2f scale = {8, 8};
    sfVector2f pos = {x, y};

    iPause[4].texture = sfTexture_createFromFile(path, NULL);
    iPause[4].sprite = sfSprite_create();
    sfSprite_setTexture(iPause[4].sprite, iPause[4].texture, sfTrue);
    sfSprite_setScale(iPause[4].sprite, scale);
    sfSprite_setPosition(iPause[4].sprite, pos);
}

void init_back_button(global *all)
{
    int x = all->game.img_pause[5].pos_x = 220;
    int y = all->game.img_pause[5].pos_y = 620;
    char path[] = "./content/buttons/back.png";
    sfVector2f scale = {8, 8};
    sfVector2f pos = {x, y};

    iPause[5].texture = sfTexture_createFromFile(path, NULL);
    iPause[5].sprite = sfSprite_create();
    sfSprite_setTexture(iPause[5].sprite, iPause[5].texture, sfTrue);
    sfSprite_setScale(iPause[5].sprite, scale);
    sfSprite_setPosition(iPause[5].sprite, pos);
}
