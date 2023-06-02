/*
** EPITECH PROJECT, 2022
** my main
** File description:
** desc
*/

#include <unistd.h>
#include "rpg.h"

static void img_back(global *all)
{
    int x = all->game.img[0].pos_x = 960;
    int y = all->game.img[0].pos_y = 540;
    sfVector2f scale = {3, 3};
    sfVector2f origin = {3200, 1300};
    sfVector2f pos = {x, y};
    char *path = "./content/background/map.png";

    iGame[0].texture = sfTexture_createFromFile(path, NULL);
    iGame[0].sprite = sfSprite_create();
    sfSprite_setTexture(iGame[0].sprite, iGame[0].texture, sfTrue);
    sfSprite_setScale(iGame[0].sprite, scale);
    sfSprite_setOrigin(iGame[0].sprite, origin);
    sfSprite_setPosition(iGame[0].sprite, pos);
}

static void character(global *all)
{
    int x = all->game.img[2].pos_x = 870;
    int y = all->game.img[2].pos_y = 460;
    sfVector2f scale = {3.5, 3.5};
    sfVector2f pos = {x, y};
    char path[] = "./content/perso/player.png";
    all->game.img[2].rect = malloc(sizeof(sfIntRect) * 3);
    all->game.img[2].rect[0] = (sfIntRect) {0, 0, 65, 75};

    iGame[2].texture = sfTexture_createFromFile(path, NULL);
    iGame[2].sprite = sfSprite_create();
    sfSprite_setTexture(iGame[2].sprite, iGame[2].texture, sfTrue);
    sfSprite_setScale(iGame[2].sprite, scale);
    sfSprite_setPosition(iGame[2].sprite, pos);
    sfSprite_setTextureRect(iGame[2].sprite, all->game.img[2].rect[0]);
}

static void init_village(global *all)
{
    sfVector2f scale = {3, 3};
    sfVector2f origin = {3200, 1300};
    sfVector2f pos = {960, 540};
    char *path = "./content/deco/structures.png";

    iGame[3].texture = sfTexture_createFromFile(path, NULL);
    iGame[3].sprite = sfSprite_create();
    sfSprite_setTexture(iGame[3].sprite, iGame[3].texture, sfTrue);
    sfSprite_setScale(iGame[3].sprite, scale);
    sfSprite_setOrigin(iGame[3].sprite, origin);
    sfSprite_setPosition(iGame[3].sprite, pos);
}

static void init_framebuffer(global *all)
{
    int x = 960;
    int y = 540;
    int total_pix = (5000 * 5000) * 4;
    sfVector2f scale = {3, 3};
    sfVector2f origin = {3200, 1300};
    sfVector2f pos = {x, y};

    all->game.f_buffer.framebuffer = malloc(sizeof(framebuffer_t));
    all->game.f_buffer.framebuffer->width = 5000;
    all->game.f_buffer.framebuffer->height = 5000;
    iFBUFFER->pixel = malloc(sizeof(sfUint8) * total_pix);
    all->game.f_buffer.texture = sfTexture_create(5000, 5000);
    all->game.f_buffer.sprite = sfSprite_create();
    sfSprite_setTexture(iBUFFER.sprite, iBUFFER.texture, sfTrue);
    for (int i = 0; i < total_pix; i++)
        all->game.f_buffer.framebuffer->pixel[i] = 0;
    sfSprite_setScale(all->game.f_buffer.sprite, scale);
    sfSprite_setOrigin(all->game.f_buffer.sprite, origin);
    sfSprite_setPosition(all->game.f_buffer.sprite, pos);
    all->game.f_buffer.fade_camp = 255;
    all->game.f_buffer.add_camp = 1;
}

void init_game_content(global *all)
{
    iGame = malloc(sizeof(image_main) * 10);
    all->game.f_buffer.leaf_y = 800;
    all->game.f_buffer.leaf_x = 2571;
    all->game.f_buffer.leaf_y2 = 777;
    all->game.f_buffer.leaf_x2 = 2571;
    all->game.f_buffer.leaf_y3 = 820;
    all->game.f_buffer.leaf_x3 = 2571;
    init_framebuffer(all);
    img_back(all);
    init_village(all);
    character(all);
    init_music(all);
    init_ragnar_text(all);
    init_lucien_text(all);
    init_alys_text(all);
}
