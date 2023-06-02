/*
** EPITECH PROJECT, 2022
** my main
** File description:
** desc
*/

#include <unistd.h>
#include "rpg.h"

static void img_setting(global *all)
{
    sfVector2f scale = {2.74, 2.26};
    sfVector2f pos = {555, 300};
    float x = all->setting.img->size_x = 1.67;
    float y = all->setting.img->size_y = 2.26;
    sfVector2f scale02 = {x, y};
    char *path1 = "./content/background/settings_menu.png";
    char *path2 = "./content/effects/front_life.png";

    iSet[0].texture = sfTexture_createFromFile(path1, NULL);
    iSet[0].sprite = sfSprite_create();
    iSet[1].texture = sfTexture_createFromFile(path2, NULL);
    iSet[1].sprite = sfSprite_create();
    all->game.my_music.level = 100;
    sfSprite_setTexture(iSet[0].sprite, iSet[0].texture, sfTrue);
    sfSprite_setScale(iSet[0].sprite, scale);
    sfSprite_setTexture(iSet[1].sprite, iSet[1].texture, sfTrue);
    sfSprite_setScale(iSet[1].sprite, scale02);
    sfSprite_setPosition(iSet[1].sprite, pos);
}

void init_settings_menu_content(global *all)
{
    all->setting.img = malloc(sizeof(setting_img) * 5);
    img_setting(all);
}
