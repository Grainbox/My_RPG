/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** init
*/

#include "rpg.h"

void init_alys_dialogue(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    char *dialogue1 = "T'es qui toi ? C'est Ragnar qui t'envoie ?\n";
    char *dial1_2 = "Fais voir cette lettre.";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.alys_talk = sfText_create();
    my_sprintf(dialogue1, buffer);
    my_strcat(buffer, dial1_2);
    sfText_setFont(all->game.npc.alys_talk, font);
    sfText_setScale(all->game.npc.alys_talk, text_scale);
    sfText_setPosition(all->game.npc.alys_talk, pos);
    sfText_setString(all->game.npc.alys_talk, buffer);
    sfText_setColor(all->game.npc.alys_talk, color);
    free(buffer);
}

void init_alys_dialogue2(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    char *dialogue2 = "Apparemment je dois t'equiper avec ma cargaison.\n";
    char *dial2_2 = "Prends cette epee et ce bouquin magique.";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.alys_talk = sfText_create();
    my_sprintf(dialogue2, buffer);
    my_strcat(buffer, dial2_2);
    sfText_setFont(all->game.npc.alys_talk, font);
    sfText_setScale(all->game.npc.alys_talk, text_scale);
    sfText_setPosition(all->game.npc.alys_talk, pos);
    sfText_setString(all->game.npc.alys_talk, buffer);
    sfText_setColor(all->game.npc.alys_talk, color);
    free(buffer);
}

void init_alys_dialogue3(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    char *dialogue3 = "Si avec ca tu te fais battre, on ne peut plus\nrien ";
    char *dial3_2 = "pour toi.";
    char *dial3_3 = "";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.alys_talk = sfText_create();
    my_sprintf(dialogue3, buffer);
    my_strcat(buffer, dial3_2);
    my_strcat(buffer, dial3_3);
    sfText_setFont(all->game.npc.alys_talk, font);
    sfText_setScale(all->game.npc.alys_talk, text_scale);
    sfText_setPosition(all->game.npc.alys_talk, pos);
    sfText_setString(all->game.npc.alys_talk, buffer);
    sfText_setColor(all->game.npc.alys_talk, color);
    free(buffer);
}

void init_alys_content(global *all)
{
    init_alys_dialogue(all);
    init_alys_dialogue2(all);
    init_alys_dialogue3(all);
}
