/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init
*/

#include "rpg.h"

void init_boss_dialogue(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.boss_talk = sfText_create();
    my_sprintf("Salut je fais des test\n", buffer);
    my_strcat(buffer, "Salut c'est un autre test =)");
    sfText_setFont(all->game.npc.boss_talk, font);
    sfText_setScale(all->game.npc.boss_talk, text_scale);
    sfText_setPosition(all->game.npc.boss_talk, pos);
    sfText_setString(all->game.npc.boss_talk, buffer);
    sfText_setColor(all->game.npc.boss_talk, color);
    free(buffer);
}

void init_boss_dialogue2(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.boss_talk = sfText_create();
    my_sprintf("MET LE TEXTE QUE TU VEUX HUGO\n", buffer);
    my_strcat(buffer, "ME FAIS PAS CHIER.");
    sfText_setFont(all->game.npc.boss_talk, font);
    sfText_setScale(all->game.npc.boss_talk, text_scale);
    sfText_setPosition(all->game.npc.boss_talk, pos);
    sfText_setString(all->game.npc.boss_talk, buffer);
    sfText_setColor(all->game.npc.boss_talk, color);
    free(buffer);
}

void init_boss_dialogue3(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.boss_talk = sfText_create();
    my_sprintf("TEXTE A REMPLIR TA CAPTER\n", buffer);
    my_strcat(buffer, "REND PAS FOU.");
    sfText_setFont(all->game.npc.boss_talk, font);
    sfText_setScale(all->game.npc.boss_talk, text_scale);
    sfText_setPosition(all->game.npc.boss_talk, pos);
    sfText_setString(all->game.npc.boss_talk, buffer);
    sfText_setColor(all->game.npc.boss_talk, color);
    free(buffer);
}

void init_boss_content(global *all)
{
    init_boss_dialogue(all);
    init_boss_dialogue2(all);
    init_boss_dialogue3(all);
}
