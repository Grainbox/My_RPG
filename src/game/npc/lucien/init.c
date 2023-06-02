/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init
*/

#include "rpg.h"

void init_lucien_dialogue(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    char *dialogue1 = "C'est toi le jeune refugie ?\nLe seul survivant ";
    char *dial1_2 = "de l'assaut au village juste\nau nord d'ici ?";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.lucien_talk = sfText_create();
    my_sprintf(dialogue1, buffer);
    my_strcat(buffer, dial1_2);
    sfText_setFont(all->game.npc.lucien_talk, font);
    sfText_setScale(all->game.npc.lucien_talk, text_scale);
    sfText_setPosition(all->game.npc.lucien_talk, pos);
    sfText_setString(all->game.npc.lucien_talk, buffer);
    sfText_setColor(all->game.npc.lucien_talk, color);
    free(buffer);
}

void init_lucien_dialogue2(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    char *dialogue2 = "Si tu veux venger les tiens il te faudra\nt'equiper.";
    char *dial2_2 = " Va au camp a l'ouest d'ici,\nRagnar pourra t'aider.";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.lucien_talk = sfText_create();
    my_sprintf(dialogue2, buffer);
    my_strcat(buffer, dial2_2);
    sfText_setFont(all->game.npc.lucien_talk, font);
    sfText_setScale(all->game.npc.lucien_talk, text_scale);
    sfText_setPosition(all->game.npc.lucien_talk, pos);
    sfText_setString(all->game.npc.lucien_talk, buffer);
    sfText_setColor(all->game.npc.lucien_talk, color);
    free(buffer);
}

void init_lucien_dialogue3(global *all)
{
    char *path = "./content/font/pressstart2p-regular.ttf";
    char *dialogue3 = "Moi je vais rester ici, contrairement aux\nautres ";
    char *dial3_2 = "villageois. Ils ont fuient en cas\nd'arrivee de l'ennemi";
    char *dial3_3 = " ici.";
    sfFont* font = sfFont_createFromFile(path);
    sfVector2f pos = {400, 850};
    char *buffer = malloc(sizeof(char) * 200);
    sfColor color = {121, 84, 72, 255};
    sfVector2f text_scale = {0.8, 1};

    all->game.npc.lucien_talk = sfText_create();
    my_sprintf(dialogue3, buffer);
    my_strcat(buffer, dial3_2);
    my_strcat(buffer, dial3_3);
    sfText_setFont(all->game.npc.lucien_talk, font);
    sfText_setScale(all->game.npc.lucien_talk, text_scale);
    sfText_setPosition(all->game.npc.lucien_talk, pos);
    sfText_setString(all->game.npc.lucien_talk, buffer);
    sfText_setColor(all->game.npc.lucien_talk, color);
    free(buffer);
}

void init_lucien_content(global *all)
{
    init_lucien_dialogue(all);
    init_lucien_dialogue2(all);
    init_lucien_dialogue3(all);
}
