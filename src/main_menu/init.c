/*
** EPITECH PROJECT, 2022
** my main
** File description:
** desc
*/

#include <unistd.h>
#include "rpg.h"

static void init_background(global *all)
{
    char *path = "./content/background/main-menu.png";
    sfVector2f scale = {1.12, 1.12};

    iMain[0].texture = sfTexture_createFromFile(path, NULL);
    iMain[0].sprite = sfSprite_create();
    sfSprite_setTexture(iMain[0].sprite, iMain[0].texture, sfTrue);
    sfSprite_setScale(iMain[0].sprite, scale);
}

static void init_start_button(global *all)
{
    char *path = "./content/buttons/start-button.png";
    sfVector2f scale_button = {10, 10};
    sfVector2f pos_button = {800, 500};

    iMain[1].texture = sfTexture_createFromFile(path, NULL);
    iMain[1].sprite = sfSprite_create();
    sfSprite_setTexture(iMain[1].sprite, iMain[1].texture, sfTrue);
    sfSprite_setScale(iMain[1].sprite, scale_button);
    sfSprite_setPosition(iMain[1].sprite, pos_button);
}

static void init_exit_button(global *all)
{
    char *path = "./content/buttons/exit-button.png";
    sfVector2f scale_button = {10, 10};
    sfVector2f pos_button = {800, 650};

    iMain[2].texture = sfTexture_createFromFile(path, NULL);
    iMain[2].sprite = sfSprite_create();
    sfSprite_setTexture(iMain[2].sprite, iMain[2].texture, sfTrue);
    sfSprite_setScale(iMain[2].sprite, scale_button);
    sfSprite_setPosition(iMain[2].sprite, pos_button);
}

void init_main_menu_content(global *all)
{
    iMain = malloc(sizeof(image_main) * 5);
    all->game.img[2].last = 0;
    init_background(all);
    init_start_button(all);
    init_exit_button(all);
}
