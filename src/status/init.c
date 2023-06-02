/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init
*/

#include "rpg.h"

static void init_background(global *all)
{
    int x = all->game.img_pause[0].pos_x = 650;
    int y = all->game.img_pause[0].pos_y = 100;
    char path[] = "./content/background/statsv2.png";
    sfVector2f scale = {1.55, 1.61};
    sfVector2f pos = {x, y};

    iStatus[0].texture = sfTexture_createFromFile(path, NULL);
    iStatus[0].sprite = sfSprite_create();
    sfSprite_setTexture(iStatus[0].sprite, iStatus[0].texture, sfTrue);
    sfSprite_setScale(iStatus[0].sprite, scale);
    sfSprite_setPosition(iStatus[0].sprite, pos);
}

static void init_playerview(global *all)
{
    int x = all->game.img_pause[1].pos_x = 850;
    int y = all->game.img_pause[1].pos_y = 310;
    char path[] = "./content/perso/player_stand.png";
    sfVector2f scale = {4.8, 4.8};
    sfVector2f pos = {x, y};

    iStatus[1].texture = sfTexture_createFromFile(path, NULL);
    iStatus[1].sprite = sfSprite_create();
    sfSprite_setTexture(iStatus[1].sprite, iStatus[1].texture, sfTrue);
    sfSprite_setScale(iStatus[1].sprite, scale);
    sfSprite_setPosition(iStatus[1].sprite, pos);
}

static void init_plus_icone(global *all)
{
    int x = all->game.img_pause[2].pos_x = 1420;
    int y = all->game.img_pause[2].pos_y = 510;
    char path[] = "./content/buttons/plus_icone.png";
    sfVector2f scale = {0.023, 0.023};
    sfVector2f pos = {x, y};

    iStatus[2].texture = sfTexture_createFromFile(path, NULL);
    iStatus[2].sprite = sfSprite_create();
    sfSprite_setTexture(iStatus[2].sprite, iStatus[2].texture, sfTrue);
    sfSprite_setScale(iStatus[2].sprite, scale);
    sfSprite_setPosition(iStatus[2].sprite, pos);
}

static void init_plus_icone2(global *all)
{
    int x = all->game.img_pause[3].pos_x = 1420;
    int y = all->game.img_pause[3].pos_y = 555;
    char path[] = "./content/buttons/plus_icone.png";
    sfVector2f scale = {0.023, 0.023};
    sfVector2f pos = {x, y};

    iStatus[3].texture = sfTexture_createFromFile(path, NULL);
    iStatus[3].sprite = sfSprite_create();
    sfSprite_setTexture(iStatus[3].sprite, iStatus[3].texture, sfTrue);
    sfSprite_setScale(iStatus[3].sprite, scale);
    sfSprite_setPosition(iStatus[3].sprite, pos);
}

void init_status_content(global *all)
{
    all->game.img_status = malloc(sizeof(image_status) * 5);
    all->game.stats.level = 1;
    all->game.stats.points = 0;
    all->game.stats.strengh = 1;
    all->game.stats.wisdom = 1;
    init_background(all);
    init_playerview(all);
    init_plus_icone(all);
    init_plus_icone2(all);
}
