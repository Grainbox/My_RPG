/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_03
*/

#include "rpg.h"

void init_music(global *all)
{
    char path[] = "./content/ambiance.wav";
    all->game.my_music.music = sfMusic_createFromFile(path);
    all->game.my_music.level = 50;
    sfMusic_setVolume(all->game.my_music.music, all->game.my_music.level);
}

void init_stats(global *all)
{
    all->game.stats.level = 1;
    all->game.stats.points = 0;
    all->game.stats.strengh = 1;
    all->game.stats.wisdom = 1;
}
