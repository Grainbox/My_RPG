/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init2
*/

#include "rpg.h"

static void init_level_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1433, 313};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};

    all->game.stats.level_txt = sfText_create();
    int_to_str(str, all->game.stats.level);
    sfText_setFont(all->game.stats.level_txt, font);
    sfText_setPosition(all->game.stats.level_txt, pos);
    sfText_setString(all->game.stats.level_txt, str);
    sfText_setColor(all->game.stats.level_txt, color);
    free(str);
}

static void init_strengh_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1370, 505};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};

    all->game.stats.strengh_txt = sfText_create();
    int_to_str(str, all->game.stats.strengh);
    sfText_setFont(all->game.stats.strengh_txt, font);
    sfText_setPosition(all->game.stats.strengh_txt, pos);
    sfText_setString(all->game.stats.strengh_txt, str);
    sfText_setColor(all->game.stats.strengh_txt, color);
    free(str);
}

static void init_wisdom_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1370, 550};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};

    all->game.stats.wisdom_txt = sfText_create();
    int_to_str(str, all->game.stats.wisdom);
    sfText_setFont(all->game.stats.wisdom_txt, font);
    sfText_setPosition(all->game.stats.wisdom_txt, pos);
    sfText_setString(all->game.stats.wisdom_txt, str);
    sfText_setColor(all->game.stats.wisdom_txt, color);
    free(str);
}

static void init_point_text(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {1420, 695};
    char *str = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};

    all->game.stats.points_txt = sfText_create();
    int_to_str(str, all->game.stats.points);
    sfText_setFont(all->game.stats.points_txt, font);
    sfText_setPosition(all->game.stats.points_txt, pos);
    sfText_setString(all->game.stats.points_txt, str);
    sfText_setColor(all->game.stats.points_txt, color);
    free(str);
}

void init_stats_text(global *all)
{
    init_level_text(all);
    init_strengh_text(all);
    init_wisdom_text(all);
    init_point_text(all);
}
