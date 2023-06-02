/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init_texts
*/

#include "rpg.h"

static void init_first_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {380, 900};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f scale = {0.9, 1};

    all->game.fight[0].text = sfText_create();
    my_strcpy(str, "Vous faites face au boss ...");
    sfText_setFont(all->game.fight[0].text, font);
    sfText_setPosition(all->game.fight[0].text, pos);
    sfText_setScale(all->game.fight[0].text, scale);
    sfText_setString(all->game.fight[0].text, str);
    sfText_setColor(all->game.fight[0].text, color);
    free(str);
}

static void init_skip_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1080, 965};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f scale = {0.5, 0.5};

    all->game.fight[1].text = sfText_create();
    my_strcpy(str, "Appuyez sur ESPACE pour passer...");
    sfText_setFont(all->game.fight[1].text, font);
    sfText_setPosition(all->game.fight[1].text, pos);
    sfText_setScale(all->game.fight[1].text, scale);
    sfText_setString(all->game.fight[1].text, str);
    sfText_setColor(all->game.fight[1].text, color);
    free(str);
}

static void init_choose_attack(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {750, 850};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f scale = {0.9, 1};

    all->game.fight[2].text = sfText_create();
    my_strcpy(str, "Que faites-vous?");
    sfText_setFont(all->game.fight[2].text, font);
    sfText_setPosition(all->game.fight[2].text, pos);
    sfText_setScale(all->game.fight[2].text, scale);
    sfText_setString(all->game.fight[2].text, str);
    sfText_setColor(all->game.fight[2].text, color);
    free(str);
}

void init_boss_texts(global *all)
{
    init_first_text(all);
    init_skip_text(all);
    init_choose_attack(all);
    init_attack_text(all);
}
