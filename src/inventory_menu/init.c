/*
** EPITECH PROJECT, 2022
** my main
** File description:
** desc
*/

#include <unistd.h>
#include "rpg.h"

static void img_inventory01(global *all)
{
    char *path = "./content/background/inventaire.png";
    sfVector2f scale = {10.2, 10};

    iInv[0].texture = sfTexture_createFromFile(path, NULL);
    iInv[0].sprite = sfSprite_create();
    sfSprite_setTexture(iInv[0].sprite, iInv[0].texture, sfTrue);
    sfSprite_setScale(iInv[0].sprite, scale);
}

static void init_shield(global *all)
{
    char *path = "./content/weapons/shield.png";
    sfVector2f scale = {5.2, 5};
    sfVector2f pos = {215, 400};

    iInv[1].texture = sfTexture_createFromFile(path, NULL);
    iInv[1].sprite = sfSprite_create();
    sfSprite_setTexture(iInv[1].sprite, iInv[1].texture, sfTrue);
    sfSprite_setScale(iInv[1].sprite, scale);
    sfSprite_setPosition(iInv[1].sprite, pos);
}

static void init_sword(global *all)
{
    char *path = "./content/weapons/sword2.png";
    sfVector2f scale = {2, 2};
    sfVector2f pos = {635, 420};

    iInv[2].texture = sfTexture_createFromFile(path, NULL);
    iInv[2].sprite = sfSprite_create();
    sfSprite_setTexture(iInv[2].sprite, iInv[2].texture, sfTrue);
    sfSprite_setScale(iInv[2].sprite, scale);
    sfSprite_setPosition(iInv[2].sprite, pos);
}

static void init_book(global *all)
{
    char *path = "./content/weapons/book.png";
    sfVector2f scale = {4, 4};
    sfVector2f pos = {970, 380};

    iInv[3].texture = sfTexture_createFromFile(path, NULL);
    iInv[3].sprite = sfSprite_create();
    sfSprite_setTexture(iInv[3].sprite, iInv[3].texture, sfTrue);
    sfSprite_setScale(iInv[3].sprite, scale);
    sfSprite_setPosition(iInv[3].sprite, pos);
}

void init_inventory_menu_content(global *all)
{
    all->inventory.img_inv = malloc(sizeof(img_inventory) * 5);
    all->inventory.shield = 0;
    img_inventory01(all);
    init_shield(all);
    init_sword(all);
    init_book(all);
}
