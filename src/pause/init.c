/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init
*/

#include "rpg.h"

static void init_background(global *all)
{
    int x = all->game.img_pause[0].pos_x = 100;
    int y = all->game.img_pause[0].pos_y = 100;
    char path[] = "./content/background/pause_back.png";
    sfVector2f scale = {10, 10};
    sfVector2f pos = {x, y};

    iPause[0].texture = sfTexture_createFromFile(path, NULL);
    iPause[0].sprite = sfSprite_create();
    sfSprite_setTexture(iPause[0].sprite, iPause[0].texture, sfTrue);
    sfSprite_setScale(iPause[0].sprite, scale);
    sfSprite_setPosition(iPause[0].sprite, pos);
}

static void init_resume_button(global *all)
{
    int x = all->game.img_pause[1].pos_x = 165;
    int y = all->game.img_pause[1].pos_y = 200;
    char path[] = "./content/buttons/resume_button.png";
    sfVector2f scale = {8, 8};
    sfVector2f pos = {x, y};

    iPause[1].texture = sfTexture_createFromFile(path, NULL);
    iPause[1].sprite = sfSprite_create();
    sfSprite_setTexture(iPause[1].sprite, iPause[1].texture, sfTrue);
    sfSprite_setScale(iPause[1].sprite, scale);
    sfSprite_setPosition(iPause[1].sprite, pos);
}

static void init_settings_button(global *all)
{
    int x = all->game.img_pause[3].pos_x = 165;
    int y = all->game.img_pause[3].pos_y = 480;
    char path[] = "./content/buttons/button-settings.png";
    sfVector2f scale = {8, 8};
    sfVector2f pos = {x, y};

    iPause[3].texture = sfTexture_createFromFile(path, NULL);
    iPause[3].sprite = sfSprite_create();
    sfSprite_setTexture(iPause[3].sprite, iPause[3].texture, sfTrue);
    sfSprite_setScale(iPause[3].sprite, scale);
    sfSprite_setPosition(iPause[3].sprite, pos);
}

static void init_quit_button(global *all)
{
    int x = all->game.img_pause[2].pos_x = 220;
    int y = all->game.img_pause[2].pos_y = 750;
    char path[] = "./content/buttons/quit-button.png";
    sfVector2f scale = {8, 8};
    sfVector2f pos = {x, y};

    iPause[2].texture = sfTexture_createFromFile(path, NULL);
    iPause[2].sprite = sfSprite_create();
    sfSprite_setTexture(iPause[2].sprite, iPause[2].texture, sfTrue);
    sfSprite_setScale(iPause[2].sprite, scale);
    sfSprite_setPosition(iPause[2].sprite, pos);
}

void init_pause_content(global *all)
{
    all->game.img_pause = malloc(sizeof(image_pause) * 6);
    init_background(all);
    init_resume_button(all);
    init_status_button(all);
    init_settings_button(all);
    init_quit_button(all);
    init_back_button(all);
}
