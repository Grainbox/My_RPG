/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init_attack_text
*/

#include "rpg.h"

void init_attack_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {750, 850};
    sfColor color = {121, 84, 72, 255};
    sfVector2f scale = {0.9, 1};

    all->game.fight[3].text = sfText_create();
    sfText_setFont(all->game.fight[3].text, font);
    sfText_setPosition(all->game.fight[3].text, pos);
    sfText_setScale(all->game.fight[3].text, scale);
    sfText_setColor(all->game.fight[3].text, color);
}
