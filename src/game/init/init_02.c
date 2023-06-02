/*
** EPITECH PROJECT, 2022
** init 02
** File description:
** desc
*/

#include <unistd.h>
#include "rpg.h"

void init_ragnar_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1000, 900};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};

    all->game.npc.ragnar_talk = sfText_create();
    my_strcpy(str, "Press 'E' to talk with Ragnar");
    sfText_setFont(all->game.npc.ragnar_talk, font);
    sfText_setPosition(all->game.npc.ragnar_talk, pos);
    sfText_setString(all->game.npc.ragnar_talk, str);
    sfText_setColor(all->game.npc.ragnar_talk, color);
    free(str);
}

void init_lucien_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1000, 900};
    char *str = "Press 'E' to talk with Lucien";
    sfColor color = {121, 84, 72, 255};

    all->game.npc.lucien_hello = sfText_create();
    sfText_setFont(all->game.npc.lucien_hello, font);
    sfText_setPosition(all->game.npc.lucien_hello, pos);
    sfText_setString(all->game.npc.lucien_hello, str);
    sfText_setColor(all->game.npc.lucien_hello, color);
}

void init_alys_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1000, 900};
    char *str = "Press 'E' to talk with Alys";
    sfColor color = {121, 84, 72, 255};

    all->game.npc.alys_hello = sfText_create();
    sfText_setFont(all->game.npc.alys_hello, font);
    sfText_setPosition(all->game.npc.alys_hello, pos);
    sfText_setString(all->game.npc.alys_hello, str);
    sfText_setColor(all->game.npc.alys_hello, color);
}

void init_boss_text(global *all)
{
    char *path = "./content/font/PressStart2P-Regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1000, 900};
    char *str = "Press 'E' to fight the boss";
    sfColor color = {121, 84, 72, 255};

    all->game.npc.boss_hello = sfText_create();
    sfText_setFont(all->game.npc.boss_hello, font);
    sfText_setPosition(all->game.npc.boss_hello, pos);
    sfText_setString(all->game.npc.boss_hello, str);
    sfText_setColor(all->game.npc.boss_hello, color);
}
